# Linux File Lister Tool (in C)

A simple command-line tool that lists files in a directory and displays their sizes in bytes. This project was built as a learning exercise for **C programming** and **Linux system programming**.

## Features
- List regular files in a directory.
- Display file size in bytes.
- Simple, easy-to-use command-line interface.
- Built in C, designed for Linux systems.

## Installation

### Prerequisites:
- GCC (GNU Compiler Collection) installed on your system.
- Linux-based operating system (tested on Ubuntu).

### Clone the repository:
```bash
git clone https://github.com/<username>/linux-c-tools.git
cd linux-c-tools

Build the project:

Use the following command to compile the project:

make

Run the program:

After building, you can run the tool like so:

./file_lister <directory_path>

Example:

./file_lister /home/user/Documents

Clean up build files:

To remove object files and the compiled executable:

make clean

Debugging:

To run the program in the debugger:

make debug

Usage

The program accepts a directory path as a command-line argument and lists the files in the specified directory along with their sizes in bytes.

Example usage:

./file_lister /home/user/Documents

Output:

Files in directory '/home/user/Documents':
file1.txt - Size: 1024 bytes
file2.jpg - Size: 2048 bytes

License

This project is licensed under the MIT License - see the LICENSE.md
file for details.
Contributions

Feel free to open an issue or submit a pull request if you'd like to contribute to this project!


### What’s in this README?
- **Introduction**: What the project is about and why it was built.
- **Installation Instructions**: How to set up and compile the project.
- **Usage**: How to run the program and what the expected output is.
- **License**: Basic license section (MIT license is a good choice for open-source).
- **Contributions**: Encouragement for others to contribute or report issues.
