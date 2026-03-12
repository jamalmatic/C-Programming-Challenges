# Challenge 02 — Seconds Converter

## Description

Write a C program that converts a total number of seconds into:

- hours
- minutes
- seconds

The program should read the total number of seconds from the user and display the equivalent time in hours, minutes, and seconds.

---

## Example

Input


3665


Output


1 hour(s) 1 minute(s) 5 second(s)


---

## Input

A single integer representing the **total number of seconds**.

Example:


7322


---

## Output

Display the time converted into:


hours minutes seconds


Example:


2 hour(s) 2 minute(s) 2 second(s)


---

## Concepts Practiced

This challenge helps you practice:

- integer variables
- integer division (`/`)
- modulo operator (`%`)
- arithmetic calculations
- formatted output using `printf`

---

## Hints

To convert seconds:


hours = total_seconds / 3600
minutes = (total_seconds % 3600) / 60
seconds = total_seconds % 60


---

## Difficulty

Intermediate

---

Happy coding!