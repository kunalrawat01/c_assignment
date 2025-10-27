C Assignment (Functions and Header Files)

Files included
1. mainmenu.c        – Main program (menu to use number & array functions)
2. numtils.c       – Number-related function implementations
3. numtils.h       – Declarations for number functions
4. arraytools.c    – Array-related function implementations
5. arraytools.h    – Declarations for array functions

How to compile
Open Command Prompt or Git Bash in the project folder and run:
gcc mainmenu.c numutils.c -o numprog
gcc arraymain.c arraytools.c -o arrayprog


How to run
After compiling, run:
./numprog
./arrayprog


Program features
1) Number Functions (choose option 1 in menu)
   - Check Armstrong number
   - Check Adams number
   - Check Prime Palindrome number

2) Array Functions (choose option 2 in menu)
   - Input an array
   - Display array
   - Find index of max and min
   - Compute average
   - Reverse array
   - Sort array (ascending)
   - Linear search for a value

Example usage
========== MAIN MENU ==========
1. Number Functions
2. Array Functions
3. Exit
Enter your choice: 1

----- NUMBER FUNCTIONS -----
1. Check Armstrong Number
2. Check Adams Number
3. Check Prime Palindrome Number
4. Back to Main Menu
Enter your choice: 1
Enter a number: 153
153 is an Armstrong number.
 
Author:
Aman Chaudhary
GLA University,Mathura


