% This file expects a 2x2 square array
clear
file = fopen('values.txt');
inFile = fscanf(file,'%d');
n = sqrt(length(inFile));
inArray = [inFile(1:n)';inFile(n+1:length(inFile))'];

row = 1;
col = 1;
for row = 1:size(inArray,1)
    for col = 1:size(inArray,2)
        test = bitget(inArray(row, col),11:-1:4,"int16"); % get 8 relevant MSBs of ADC input
        % note that bit 12 is the sign bit, and since we have a positive
        % reading we do not want this bit
        convertedArray(row, col) = test(1)*2^7+test(2)*2^6+test(3)*2^5+test(4)*2^4+test(5)*2^3+test(6)*2^2+test(7)*2+test(8);       
    end
end
image(convertedArray); colormap gray ; colorbar;
