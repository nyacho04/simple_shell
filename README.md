
# Simple shell: The nashell
![nashell](https://github.com/user-attachments/assets/263f54fb-5501-48e4-a24a-93cac75d12e6)
# What is a Shell?
A shell is a user interface that allows you to interact with the operating system of a computer. It acts as a command-line interpreter, enabling users to execute commands, run programs, and manage files. Shells can be graphical, like the interfaces you see on Windows or macOS, or text-based, where you type commands into a terminal window.

- This is a custom implementation of a "simple shell" in C, The project includes a set of functions
## 📁 Files
 `shell.h`: Header file containing function prototypes and necessary includes.
 
 `nashell.c`: The main function of the shell.
 
 `display_prompt.c`: This function displays a command-line prompt labeled nashell$. It uses the printf function to print the prompt and then flushes the output to ensure it appears immediately on the screen, even if buffering is enabled.
 
 `read_command.c`: It uses the getline function to dynamically allocate memory and store the command as a string. If an error occurs (e.g., end-of-file is reached

 `execute_command.c`: Handles the execution of a shell command using a child process. It creates a new process with fork(), and the child process uses execve() to run the specified command. If the command fails, an error message is printed. The parent process waits for the child to complete before continuing.

`find_command_in_path.c`: This function scans each directory listed in the PATH environment variable to locate an executable file that matches the provided command. It returns the full path to the executable if found or NULL if the command is not present in any of the directories.

## Compilation and running
```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
```c
./hsh
```
# Usage
```c
nashell$ ls
AUTHORS  README.md  display_prompt.c  execute_command.c  find_command_in_path.c  hsh  nashell.c  read_command.c  shell.h  super_simple_shell
```
```c
nashell$ pwd
/holbertonschool-simple_shell
```
```c
nashell$ cat AUTHORS
# The function of this file is lists all individuals having contributed content to the repository.
```
```c
nashell$ clear
nashell$
```
```c
nashell$ env
AWS_EXECUTION_ENV=AWS_ECS_FARGATE
AWS_CONTAINER_CREDENTIALS_RELATIVE_URI=/v2/credentials/a086bdf5-5c1a-4d9b-a6fa-c3383ff60712
HOSTNAME=57cd55addaed46ec9bc834085ecadec2-2377118072
AWS_DEFAULT_REGION=sa-east-1
AWS_REGION=sa-east-1
```
## 💢 Exit
```c
nashell$ exit
root@57cd55addaed46ec9bc834085ecadec2-2377118072:/holbertonschool-simple_shell#
```
- Also you can press "ctrl+D" and it close right
## 📛 Error Examples
```c
nashell$ hola esto es un error
command not found: hola esto es un error
```
```c
nashell$ /bin
command execute failed: Permission denied
```
