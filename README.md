# Mini-shell
A minimalist UNIX shell written in C for learning system-level programming.
💡 What is this project?
This is a custom-built command-line shell implemented in pure C, as part of my learning journey in low-level programming. It supports basic features of traditional UNIX shells, such as:

✅ Features
Command execution (ls, pwd, mkdir, rm, echo, etc.)

Built-in commands:

cd — with basic error handling

exit — to quit the shell

Argument parsing using strtok()

Process creation using fork()

Command execution with execvp()

Parent-child synchronization with wait()

Error messages using perror()

🧪 Demo
You can watch a full demo here 👉 [Add your video link here once uploaded]

🚀 Next steps
Implement redirection (>, <)

Add pipes (|) between commands

Command history


🛠️ How to use

git clone https://github.com/your-username/my_shell.git
cd my_shell
gcc shell.c -o myshell
./myshell

Created by Aymen Zraiga — Student & Passionate about C

