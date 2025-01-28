ASCII Art Tool

This project is a terminal-based tool that converts images into ASCII art. The tool allows you to load an image, scale it to fit your terminal, and then convert it into an ASCII representation using various characters. It also includes a Bash script that generates a formatted output, which developers can easily integrate into their terminal-based projects.
Features

    Image-to-ASCII Conversion: Converts any image into ASCII art.
    Terminal Scaling: Automatically scales the image based on the terminal's size to ensure that the art fits within the terminal window.
    Customizable Characters: Uses a set of characters to represent different levels of brightness, allowing for a detailed and visually appealing ASCII art output.
    ANSI Color Codes: (Planned feature) Adds ANSI color codes to the ASCII art, making it possible to add color to the output, enhancing the visual appeal.
    Bash Script Output: Generates a Bash script with the ASCII art and ANSI codes, allowing developers to easily copy and paste the art into their terminal-based projects.

Installation

    Clone the repository:

git clone https://github.com/Carbon14-48/ascii-art-tool.git
cd ascii-art-tool

Compile the C program:

gcc -o ascii_art Processing.c -lm

Run the Bash script to generate ASCII art:

    ./run_ascii_art.sh

Usage

    Run the tool by executing the run_ascii_art.sh script. It will prompt you to enter the path to the image you want to convert into ASCII art.

    Image Input: Provide the path to the image file (e.g., goku.jpeg, simpson.png).

    Terminal Scaling: The tool will automatically scale the image to fit your terminal's width. It will recommend an image width that works best for your terminal.

    Generated Output: The tool will output the ASCII art directly to the terminal. In the future, it will also generate a Bash script with the art, allowing you to easily copy and paste it into your own terminal scripts.

Example

Your terminal size is 238x59.
For a better experience, try not to choose a picture with a width higher than 476 px.
Enter the path to the image (e.g., goku.jpeg or simpson.png): goku.jpeg

This will generate the ASCII art for the provided image, scaled to fit your terminal's width.
