close all;
clear all;
clc;

s = serialport('COM3', 9600);

fopen(s);

i = 1;

ylim = [0 50];

while(1)
    data(i) = str2double(fscanf(s));
    
    if i <= 150
        plot(data, 'LineWidth', 1.5);
    else
        plot(data(end - 150: end), 'LineWidth', 1.5);
    end
    xlabel('Time');
    ylabel('Analog read');
    title('IR Senzor Graph');
    pause(0.0000001);
    i = i + 1;
    
end