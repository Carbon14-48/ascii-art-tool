#!/usr/bin/bash
#Author : MOHAMMED Berrichi
#last  time edited : 28/01/2025
# Get terminal size
#!/bin/bash

# Get terminal size
cols=$(tput cols)
lines=$(tput lines)
# Red color code
RED='\033[0;31m'
# Reset color code
RESET='\033[0m'
BLUE='\033[0;34m'

# Print the recommendation in red
echo -e "${RED}It is recommended to run the tool while the terminal is in full screen mode to get better dimensions${RESET}"
echo -e "${BLUE} if your are in window mode please restart the tool and use  full screen mode ${RESET}"
echo -e "Your terminal size is ${cols}x${lines}"
max=$((cols * 2))
echo -e "${RED}For a better experience, try not to choose a picture with pixels higher than $max px in width ${RESET}"

# Ask for the image path
echo -n "Enter the path to the image (e.g., goku.jpeg or simpson.png): "
read image_path

# Compile the C program
gcc -o ascii_art Processing.c -lm

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    # Run the C program with the provided arguments
    ./ascii_art "$image_path" 
else
    echo "Compilation failed. Please check your C code for errors."
fi

