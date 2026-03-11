# 01 – C Basics

This section introduces the **fundamental concepts of the C programming language**.

If you are new to C, this is the best place to start. The challenges in this folder will help you understand how a C program is structured and how basic operations work.

The exercises are organized into three difficulty levels:

* **Beginner** – First contact with C programming
* **Intermediate** – Slightly more logic and combinations of concepts
* **Advanced** – Small programs that combine several basics

---

# Topics Covered

The challenges in this section focus on the following core concepts:

* Structure of a C program
* The `main()` function
* Variables and data types
* Input and output using `printf()` and `scanf()`
* Arithmetic operators
* Type conversion

---

# Example: Basic C Program

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

Explanation:

* `#include <stdio.h>` → includes the standard input/output library
* `main()` → entry point of the program
* `printf()` → prints text to the console
* `return 0;` → indicates successful program execution

---

# Challenge List

## Beginner

| Challenge             | Description                                 |
| --------------------- | ------------------------------------------- |
| Hello World           | Write your first C program                  |
| Print Your Name       | Print your name using `printf()`            |
| Sum Two Numbers       | Read two numbers and print their sum        |
| Temperature Converter | Convert Celsius to Fahrenheit               |
| Swap Two Numbers      | Swap two numbers using a temporary variable |
| ASCII Value           | Print the ASCII value of a character        |
| Area of Circle        | Compute the area of a circle                |
| Simple Interest       | Calculate simple interest                   |

---

## Intermediate

| Challenge                | Description                                |
| ------------------------ | ------------------------------------------ |
| Basic Calculator         | Perform +, -, *, / on two numbers          |
| Seconds Converter        | Convert seconds to hours, minutes, seconds |
| Average of Three Numbers | Compute the average                        |
| Character Analyzer       | Identify digit, letter, or symbol          |
| Integer Digit Sum        | Calculate the sum of digits                |

---

## Advanced

| Challenge                 | Description                          |
| ------------------------- | ------------------------------------ |
| Unit Converter            | Convert between multiple units       |
| Distance Calculator       | Compute distance from speed and time |
| Simple Physics Calculator | Basic formulas (force, energy, etc.) |

---

# Folder Structure

```
01_c_basics/
│
├── README.md
│
├── beginner/
├── intermediate/
└── advanced/
```

Each challenge should follow this structure:

```
challenge_name/
│
├── README.md
|── starter.c
├── solution.c
└── test_cases.txt
```

---

# Learning Goals

After completing this section, you should be able to:

* Write and compile a simple C program
* Use `printf()` and `scanf()`
* Declare variables
* Perform basic arithmetic operations
* Understand the basic structure of C code

---

# Next Step

After completing this section, continue with:

```
02_control_flow
```

where you will learn how programs **make decisions and repeat tasks using loops and conditions**.
