# Simple Shell
# The nashell
This is a custom implementation of a "simple shell" in C, The project includes a set of functions
## 📁 Files
 `shell.h`: Header file containing function prototypes and necessary includes.
 `nashell.c`: The main function of the shell.
 `display_prompt.c`: This function displays a command-line prompt labeled nashell$. It uses the printf function to print the prompt and then flushes the output to ensure it appears immediately on the screen, even if buffering is enabled.
 `read_command.c`: It uses the getline function to dynamically allocate memory and store the command as a string. If an error occurs (e.g., end-of-file is reached
 ## Compilation
 ```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
