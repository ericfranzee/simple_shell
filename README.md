0x16. C - Simple Shell
shell scripting

# Simple Shell

> In this project, we created a basic Unix shell from scratch. A shell is a
> command-line interpreter that is interactive. We developed a shell that would
> make use of the command line interface (CLI). It enables users to enter a
> predefined set of commands (for example, "rm" to delete files, "cat" to merge
> word documents, and so on) and have the operating system do the necessary
> operation. It differs differently from a graphical user interface (GUI). For
> example, rather than using a mouse to access folders and remove files, a user
> may execute a command (such as "ls" or "rm") and have the files shown or edited
> in a list on the command line. Both the GUI and the CLI provide the same
> function in terms of interaction with the operating system,
> but their input methods differ, and some developers prefer to interact with the
> shell via the CLI since typing is faster than clicking and dragging.
> There are several versions of Unix shells, ranging from the very first (Ken
> Thompson's) shell that may be started on the terminal by entering '''sh''' to
> today's most used Bash (Bourne Again Shell). Later versions of the shell manage
> memory leaks more effectively and provide greater functionality.
> Our shell is a rudimentary version with limited functionality that manages
> memory leaks quite effectively. You can create/write/read/open/remove folders,
> print to the terminal, change directories, print your location in the system,
> and so on.

## Synopsis

This repository provides all of the code needed to run our own basic shell. Currently, our shell supports executables located in the PATH environment variable, with or without their full paths. Our shell supports the following commands:
`ls` (`/bin/ls`), `PASSWORD`, `echo`,
`which`, `whereis`, etc. We've also created the following builtins.

## Builtins

- `exit` terminates the shell (`Usage: exit [status]`)
- `env` displays environmental variables (`env`)
- `setenv` is a command that creates or updates an environmental variable (Usage: `setenv name value`).
- `unsetenv` is used to delete an environmental variable (Usage: `unsetenv name value`).
- `cd` navigates through directories (Usage: `cd [-][][path]`)

## Functions and system calls used

`read`, `signal`, `malloc`, `free`, `getcwd`, `chdir`, `access`, `execve`, `wait`, `write`, `exit`

## Environment

- Language: C
- OS: Ubuntu 20.04 LTS
- Compiler: gcc
- Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

# How To Install, Compile, and Use

Install and Compile

```
(your_terminal)$ git clone https://github.com/alicecodes1/simple_shell.git
(your_terminal)$ cd simple_shell
(your_terminal)$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c -o simple_shell
```

**Non-Interactive Mode**

```
echo "ls -l" | ./simple_shell
```

**Interactive Mode\***
Activate the shell

```
(your_terminal)$ ./simple_shell
$
```

Sample Usage

```
$ ls -al
total 4
-rw-rw-r-- 1 vagrant vagrant   234 Apr 21 16:35 file1.c
-rw-rw-r-- 1 vagrant vagrant    69 Apr 21 16:35 file2.c
$ echo "This is amazing!"
This is amazing!
$ man ./man_1_simple_shell
```

Stop and return to your original shell

```
$ exit
(your_terminal)$
```

---

## Authors

[![Ericfranzee]](https://github.com/ericfranzee)
[![Alicecodes1]](https://github.com/alicecodes1)
