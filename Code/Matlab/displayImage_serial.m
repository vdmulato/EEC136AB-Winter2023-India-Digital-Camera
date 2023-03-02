%% How to use this script
% To use this code, have the PSoC set up to print data over UART.
% Each data point must have a space after it, and an 'e' must be sent at
% the end of the dataset.

% The input data should be the numerical output from the 12-bit ADC.

% The input data does not have to be in the form of an array as long as
% the number of data points can be turned into a square array.
% For example, 9 data points would be valid because they can be turned
% into an 3x3 array, but 10 data points will cause an error.

% There cannot be any other types of characters among the data points.

clear
%% serial comms processing
% Adapted from code created by YouTube channel @PSoCProjects
serial_PSoC=serial('COM4','BaudRate',115200,'Parity','none','DataBits',8,'StopBits',1); % serial parameters
set(serial_PSoC,'InputBufferSize',5); % number of bytes in each read
set(serial_PSoC,'Terminator',' '); % terminator so MATLAB knows the data is finished
fopen(serial_PSoC); % open the serial port

fprintf(serial_PSoC,'%c','l'); % display serial port?

reading = fscanf(serial_PSoC,'%c');
data = [];
while (~contains(reading,'e') == 1)
    data = [data, reading];
    reading = fscanf(serial_PSoC,'%c');
end
data = str2num(data);
n = sqrt(length(data));    % determines the size of the square
inArray = reshape(data,[n,n])';    % reshapes the data into a square array
inArray = abs(inArray);

%% image creation
% iterates through rows and columns of array and converts the 12-bit ADC
% data to an 8-bit grayscale image
row = 1;
col = 1;
for row = 1:size(inArray,1)
   for col = 1:size(inArray,2)
       test = bitget(inArray(row, col),11:-1:4,"int16"); % get 8 relevant MSBs of ADC input
        % note that bit 12 is the sign bit, and since we have a positive
        % reading we do not want this bit

        % turn the truncated data into an integer
       convertedArray(row, col) = test(1)*2^7+test(2)*2^6+test(3)*2^5+test(4)*2^4+test(5)*2^3+test(6)*2^2+test(7)*2+test(8);       
   end
end
image(convertedArray); colormap gray ; colorbar;    % displays image

%% close serial comms
fclose(serial_PSoC);