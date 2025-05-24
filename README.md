# 🐚 Mini-Shell in C

A minimalist UNIX shell written in C for learning system-level programming.

---

## 💡 What is this project?

This is a custom-built command-line shell implemented in pure C, as part of my learning journey in low-level and system programming.  
It supports several core features found in traditional UNIX shells.

---

## ✅ Features

- Command execution: `ls`, `pwd`, `mkdir`, `rm`, `echo`, etc.
- Built-in commands:
  - `cd` — with basic error handling
  - `exit` — to quit the shell
- Argument parsing using `strtok()`
- Process creation using `fork()`
- Command execution with `execvp()`
- Parent-child synchronization using `wait()`
- Error reporting with `perror()`

---

## 🧪 Demo

🎬 You can watch a full demo here 👉 https://www.linkedin.com/feed/update/urn:li:ugcPost:7332038718024830976/

---

## 🚀 Next steps

- Implement redirection (`>`, `<`)
- Add support for pipes (`|`)
- Build command history
- Improve prompt styling

---

## 🛠️ How to use

```bash
git clone https://github.com/your-username/my_shell.git
cd my_shell
gcc shell.c -o myshell
./myshell
