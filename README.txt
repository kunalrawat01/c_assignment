# 💻 C Programming Assignment – Functions and Header Files

### 👨‍🎓 Author  
**Kunal Rawat**  
**GLA University, Mathura**

---

## 📘 Overview

This project demonstrates how to organize a C program using **functions** and **header files**.  
It is divided into two main modules — **Number Utilities** and **Array Tools** — each compiled and executed separately.

---

## 📂 Project Structure

| File Name | Description |
|------------|-------------|
| `mainmenu.c` | Main program providing menu options for number and array functions |
| `numutils.c` | Implements number-related functions |
| `numutils.h` | Contains function declarations for number operations |
| `arraytools.c` | Implements array-related functions |
| `arraytools.h` | Contains function declarations for array operations |

---

## ⚙️ Compilation Instructions (Windows)

Before starting, make sure **GCC (MinGW or TDM-GCC)** is installed and added to your system PATH.  
Open **Command Prompt** or **PowerShell** in the project folder and run the following commands.

### 🧩 Compile Number Functions Program
```bash
gcc mainmenu.c numutils.c -o numprog.exe
