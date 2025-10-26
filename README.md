# Arrays And Strings In C ++

## Title: Basic operations of Strings And Arrays in C ++
---
## Aim :
*To use basic functions and take input and output in C++*

## Introduction
This file gives a simple explanation of arrays and strings — two important concepts in programming. 

## Arrays

###  What is an Array?
An array is a way to store multiple values of the same type in one variable. Instead of using separate variables, arrays let us group related values.  
In C++, arrays have a fixed size and use index numbers (starting from 0) to access each element.

### Features
- Stored in continuous memory locations  
- Access any element using its index  
- Can store primitive or user-defined types

### Types of Arrays
- **1D Array**: A single row of values  
- **2D or Multi-dimensional Arrays**: Arrays of arrays (like a table)

### Common Operations
- Accessing elements: `arr[index]`  
- Inserting/deleting (can be slow due to shifting)  
- Traversing elements using loops  
- Searching and sorting

### Applications
- Grouping related data  
- Used in structures like stacks, queues, lists, etc.

---

## Summary Of Programs

### Program 1: Input and Display Array
**Task**: Read values into an array and print them.

#### Example Output:
`The marks of student are:                                                                                      
99                                                                                                                                                                                                                           
89                                                                                                                                                                                                                          
78                                                                                                                                                                                                                           
58                                                                                                                                                                                                                                                                                                
68                                                                                                                                                                                                                                                                                                                        
85                                                                                                                                                                                                                                                                                                                                         
99 89 78 58 68 85`                                                                                                                                                                                                                                                                                             

### Program 2: Find Max and Min               
Task: Find the largest and smallest values in the array.

#### Example Output:
`Enter number of elements: 6            
Enter 6 elements:               
12 65 2 78 90 34                 
Maximum element is: 90                
Minimum element is: 2`               

### Program 3: Reverse an Array
Task: Print array in reverse order.


#### Example Output:               
`The numbers of array are:                
1 2 3 4 5 6                 
Reversed array is:                   
6 5 4 3 2 1`                 

### Program 4: Sum and Average                              
Task: Calculate total and average of array values.                           


#### Example Output:               
`12 24 21 28 32 20
Sum = 137               
Average = 22`                  


### Program 5: Search for a Value                  
Task: Find the position of a specific value in the array.                   


#### Example Output:                   
`89 98 70 99 66 76                 
Key found at location: 4`                       


## Strings
### What is a String?
A string is a sequence of characters. In C++, strings can be stored as character arrays or string objects.

### Features
 - May be immutable (unchangeable) or mutable depending on the language
 - Stored as arrays of characters internally
 - In C++, they can be modified using loops and functions

### Common String Operations
 - Concatenation (joining strings)
 - Getting substrings
 - Searching and comparing
 - Calculating length

---

## Summary Of The Programs
### Program 1: Input and Display String
Task: Read a string from the user and display it.

#### Example Output:                
`Enter the string:                                     
maitraiyee                                            
maitraiyee`                                            

### Program 2: String Concatenation             
Task: Join two strings.               

 #### Example Output:            
`Enter string 1: Maitraiyee              
Enter string 2: Vashistha           
Concatenated string: Maitraiyee Vashistha`         

### Program 3: Reverse a String
Task: Print the string in reverse order.

### Example Output:
`Enter a string:
coding_in_C++
++C_ni_gnidoc`

### Program 4: Palindrome Check
Task: Check if a string is a palindrome.

#### Example Output:
`Enter the string:
racecar
racecar is a palindrome.`

## Conclusion
---
In this experiment, we explored the basics of arrays and strings in C++. Arrays allow us to store and work with collections of data using loops and indices. We performed operations like reversing, summing, and searching. Strings help handle text data and support operations such as joining, reversing, and checking for palindromes.
These concepts build the foundation for more advanced data structures and problem-solving in programming.

