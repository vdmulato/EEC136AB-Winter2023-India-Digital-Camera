%% How to use this script
% To use this code, have PuTTY save a log file.
% For best results, set up the Logging settings for Printable Output,
% choose Always Overwrite It for what to do if the file exists, and uncheck
% the Include Header box.
% Be sure the log file is saved to the same directory as the MATLAB script,
% with the name "PSOC_Output.log" (or change the filename to the correct path)

% The input data should be the raw numerical output from the 12-bit ADC.

% The input data does not have to be in the form of an array as long as
% the number of data points can be turned into a square array.
% For example, 9 data points would be valid because they can be turned
% into an 3x3 array, but 10 data points will cause an error.

% There must be a whitespace character (such as space or a newline "\n")
% between each data point in order for the input to be read correctly.
% There cannot be any other types of characters among the data points.
% The header that is sometimes written to the PSOC log file will
% automatically be ignored by this code.

% The contents of the log file are cleared after creating the image.

clear
%% input file processing
file = fopen('PSOC_Output.log','r');    % opens the log file to read data
inFile = fscanf(file,'%c'); % reads log file as characters
splitFile = strsplit(inFile, '\n');  % splits log file at newline characters
headerCheck = contains(splitFile,"=~"); % identifies PSOC log file header
headerCheck = ~headerCheck;
newIn = splitFile(headerCheck); % removes header
newIn = str2num(char(newIn));   % converts data points to numbers
newIn = reshape(newIn.',1,[]);  % reshapes the data so the input shape does not matter
n = sqrt(length(newIn));    % determines the size of the square
inArray = reshape(newIn,[n,n])';    % reshapes the data into a square array
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

%% delete contents of file
fclose(file);
file = fopen('PSOC_Output.log','w'); % opening a file in write mode clears the contents
fclose(file);24