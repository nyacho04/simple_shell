
# The nashell
# What is a Shell?
A shell is a user interface that allows you to interact with the operating system of a computer. It acts as a command-line interpreter, enabling users to execute commands, run programs, and manage files. Shells can be graphical, like the interfaces you see on Windows or macOS, or text-based, where you type commands into a terminal window.
This is a custom implementation of a "simple shell" in C, The project includes a set of functions
## 📁 Files
 `shell.h`: Header file containing function prototypes and necessary includes.
 
 `nashell.c`: The main function of the shell.
 
 `display_prompt.c`: This function displays a command-line prompt labeled nashell$. It uses the printf function to print the prompt and then flushes the output to ensure it appears immediately on the screen, even if buffering is enabled.
 
 `read_command.c`: It uses the getline function to dynamically allocate memory and store the command as a string. If an error occurs (e.g., end-of-file is reached

 `execute_command.c`: Handles the execution of a shell command using a child process. It creates a new process with fork(), and the child process uses execve() to run the specified command. If the command fails, an error message is printed. The parent process waits for the child to complete before continuing.
 ## Compilation
 ```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
