# Second-Project

in this project we have some functions we implement.  
I will explain each one of the functions, and demonstrate with examples.  
**notice that we have some restrictions and rules for every implemention of function, to make it's implement harder**.    
  

## Tower Of Hanoi (function 1):  

for explanation about what is it the tower of hanoi, you can enter the following link:  
https://en.wikipedia.org/wiki/Tower_of_Hanoi  

basically, the function gets number of disks and 3 rods, and prints the way you have to move the disks between
the rods by the rules, when all disks starts at rod A, and end in rod C.  
disk 1 is the smallest one, and disk n is the biggest one.  
**we should notice that all disks are arranged in rod A from biggest disk at the bottom to smallest disk on top.**   
and now we should move them to rod C to be arranged exactly the same, but only by the following rules.

the golden rules of hanoi tower:  
1. Only one disk may be moved at a time.  
2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or on an empty rod.  
3. No disk may be placed on top of a disk that is smaller than it.  

examples:
1. number of disks: 2, 3 rods (A, B, C):  
![image](https://user-images.githubusercontent.com/83518959/191687042-679d83cb-55e3-41a8-b5fe-a14ee6b3edfc.png)  

2. number of disks: 4, 3 rods (A, B, C):  
![image](https://user-images.githubusercontent.com/83518959/191687284-d6da4d0b-19ff-41a3-8199-cbf91adae820.png)  


## isPalindromeCounter (function 2):  

 the function gets an array, length of the array, and a counter. then compares it's chars to see if it's a palindrome or not.  
![image](https://user-images.githubusercontent.com/83518959/191774189-48545be8-283b-4016-8966-fe0309213154.png)  


## printAllCombinations (function 3):    
the function gets a string which combined from {0,1,2} and '?'. the function prints all the possible combinations
of switching the '?' char in one of the following chars: {0,1,2} only.

![image](https://user-images.githubusercontent.com/83518959/191776692-13787636-6577-4e7b-a2ce-745d9f020946.png)  
![image](https://user-images.githubusercontent.com/83518959/191776792-baba1db4-23ae-43ff-9785-895748b9eeb1.png)  


## powRec (function 4):  
the function prints the result of the first number as a base and the second one as a pow.  
for example 3**(-3):  
![image](https://user-images.githubusercontent.com/83518959/191847641-bb655b4a-17bb-4fb7-84b2-b5114b005271.png)  
and 3**4:  
![image](https://user-images.githubusercontent.com/83518959/191847758-cda984cf-d238-4313-92ce-2e00dd2814af.png)  

## isDivisibleBy3 (function 5): 
the function checks if the number is a divide of 3 or not. the number combined only from {1,2,3} digits, and we are
not allowed to use +, -, ++, \, *, %, but only if its division by 10 or modulo by 10.  
![image](https://user-images.githubusercontent.com/83518959/191849108-62f50a13-4de5-4921-b345-3e9e31d0a883.png)  

## gcd (function 6):   
you can find information about what is it gcd in the following link: https://he.wikipedia.org/wiki/%D7%9E%D7%97%D7%9C%D7%A7_%D7%9E%D7%A9%D7%95%D7%AA%D7%A3_%D7%9E%D7%A7%D7%A1%D7%99%D7%9E%D7%9C%D7%99  
and however gcd finds the greatest division of 2 given numbers.  
for example:  
![image](https://user-images.githubusercontent.com/83518959/191849511-57e1504c-f660-419d-9b4d-c509e08bce5e.png)  
![image](https://user-images.githubusercontent.com/83518959/191849616-15660c88-d807-454e-9274-bf6ca652d1d7.png)  

## countDigit (function 7):  
the function gets a number and a digit and prints how many times the the digit appears in the number.  
for example:  
![image](https://user-images.githubusercontent.com/83518959/191849940-feb17ebd-36e6-4f17-8b28-80c2810ffc0b.png)  



