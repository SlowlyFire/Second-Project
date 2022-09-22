/*****************
*Gal Giladi
*****************/
#include <stdio.h>
int counter1 = 0;
/*************************************************************************************
* Function name: towerOfHanoi
* Input: int numDisks, char fromRod, char toRod, char auxRod
* Output:void
* Function Operation: the function gets number of disks and 3 rods, and prints
					  the way you have to move the disks between the rods
					  by the rules.
*************************************************************************************/
void towerOfHanoi(int numDisks, char fromRod, char toRod, char auxRod) {
	/*
	the last disk in the rod you have to move.
	*/
	if (numDisks == 1) {
		printf("Move disk 1 from rod %c to rod %c.\n", fromRod, toRod);
		return;
	}
	/*
	after we put the disk in the right rod, we decrease the number of disks
	by 1 and print again the way of the disks between the rods.
	*/
	towerOfHanoi(numDisks - 1, fromRod, auxRod, toRod);
	printf("Move disk %d from rod %c to rod %c.\n", numDisks, fromRod, toRod);
	towerOfHanoi(numDisks - 1, auxRod, toRod, fromRod);
}
/*************************************************************************************
* Function name: isPalindromeCounter
* Input: char str[], int len, int counter
* Output:int
* Function Operation: the function gets an array, length of the array and a counter
*					  and it compares it's chars to see if it's a palindrome or not.
*************************************************************************************/
int isPalindromeCounter(char str[], int len, int counter) {
	/*
	compares between the chars and counts everytime it's the same.
	*/
	if (str[counter] == str[len - 1]) {
		counter++;
		/*
		"if condition" to stop the recursion and returning the counter.
		*/	
		if (counter == len || counter+1 == len) 
			return counter;
		/*
		keeps comparing
		*/
		return isPalindromeCounter(str, (len - 1),counter);
	}
	/*
	returning 0 if it's not a palindrome.
	*/
	else
	{
		return 0; 
	}
}
/*************************************************************************************
* Function name: isPalindrome
* Input: char str[], int len
* Output:void
* Function Operation:The function gets a char array and the length of the array
*					 and prints if the array is a palindrome or not.
*************************************************************************************/
void isPalindrome(char str[], int len) {
	/*
	if the function returns 0 so it's not a palimdrome. 
	*/
	if (isPalindromeCounter(str,len,0)==0) {
			printf("The reverse of %s is not %s.\n", str, str);
			return;
		}
	/*
	if the function returns a number which is not 0 so it's a palimdrome.
	*/
	else
	{
		printf("The reverse of %s is also %s.\n", str, str);
		return;
	}
	
}
/*************************************************************************************
* Function name: changingSpecialChars
* Input: char pattern[], int len,int i
* Output:void
* Function Operation: the function gets an array, length of the array and an index
*					  and switch all the '?' to {0,1,2} by order of small to grow 
*					  numbers, prints all the combinations of numbers and counts them.
*************************************************************************************/
void changingSpecialChars(char pattern[], int len,int i) {
	/*
	i gets 0 as a start from the function printAllCombinations and then checks
	if i is bigger than len. if it's bigger, so there are no more '?' and it
	can print the combination. however it counts how many combinations there are.
	*/
	if (i > len) {
		printf("%s\n", pattern);
		counter1++;
	}
	/*
	changes every single '?' to {0,1,2} by order from small to grow and 
	increase i by 1.
	*/
	else {
		if (pattern[i] == '?')
		{
			pattern[i] = '0';
			changingSpecialChars(pattern, len, i + 1);
			pattern[i] = '1';
			changingSpecialChars(pattern, len, i + 1);
			pattern[i] = '2';
			changingSpecialChars(pattern, len, i + 1);
			pattern[i] = '?';
		}
		/*
		if the char is not '?' it keeps going to the next char.
		*/
		else 
			changingSpecialChars(pattern, len, i + 1);
		
	}
}
/*************************************************************************************
* Function name: printAllCombinations
* Input: char pattern[], int len
* Output:void
* Function Operation: calls to changingSpecialChars function and prints how many
					  combinations there are.
*************************************************************************************/
void printAllCombinations(char pattern[], int len) {
	changingSpecialChars(pattern, len-1, 0);
	printf("Number of combinations is: %d\n", counter1);
}
/*************************************************************************************
* Function name: powRecSum
* Input: long int firstNum, long int secondNum, float sum
* Output:float
* Function Operation: the function gets 2 numbers. the first one is the base
					  and the second one is the pow.
*************************************************************************************/
float powRecSum(long int firstNum, long int secondNum, float sum) {
	/*
	the function checks all the variations of pow.
	and sums up the number with it's pow.
	*/
	if (secondNum > 1) {
		sum = sum * firstNum;
		return powRecSum(firstNum, secondNum - 1,sum);
	}
	if (secondNum == 1) 
		return sum * firstNum;
	
	if (secondNum < 0) {
		sum = sum * firstNum;
		return powRecSum(firstNum, secondNum + 1,sum);
	}
	if (secondNum == 0) 
		return 1/sum;
}
/*************************************************************************************
* Function name: powRec
* Input: long int firstNum, long int secondNum
* Output:void
* Function Operation: the function prints the sum of the first number as a base
					  and the second one as a pow.
*************************************************************************************/
void powRec(long int firstNum, long int secondNum) {

		printf("The result is %f\n",powRecSum(firstNum, secondNum, 1));
		return;
}
/*************************************************************************************
* Function name: sumOfDivided
* Input: int sum1, long long n
* Output:int
* Function Operation: the function checks all the variations of the last 2 digits
					  of the number and divides the number by 10 evereytime to check
					  all the digits. the functions returns the sum of all the digits
					  modulu3.
*************************************************************************************/
int sumOfDivided(int sum1, long long n) {
	if (n % 10 == 1 && sum1 == 0)
		return sumOfDivided(1, n / 10);
	if (n % 10 == 1 && sum1 == 1)
		return sumOfDivided(2, n / 10);
	if (n % 10 == 1 && sum1 == 2)
		return sumOfDivided(0, n / 10);
	if (n % 10 == 2 && sum1 == 0)
		return sumOfDivided(2, n / 10);
	if (n % 10 == 2 && sum1 == 1)
		return sumOfDivided(0, n / 10);
	if (n % 10 == 2 && sum1 == 2)
		return sumOfDivided(1, n / 10);
	if (n % 10 == 3 && sum1 == 0)
		return sumOfDivided(0, n / 10);
	if (n % 10 == 3 && sum1 == 1)
		return sumOfDivided(1, n / 10);
	if (n % 10 == 3 && sum1 == 2)
		return sumOfDivided(2, n / 10);
	if (n % 10 == 0)
		return sum1;
}
/*************************************************************************************
* Function name: isDivisibleBy3
* Input: long long n
* Output:void
* Function Operation: the function calls to sumOfDivided functions to checks if the
					  number it gets is a divide of 3 or not. the function prints
					  the answer.
*************************************************************************************/
void isDivisibleBy3(long long n) {
	/*
	comparing the function to the rest of modulu3.
	if it's 0 it's a divide of 3.
	*/
	if (sumOfDivided(0, n) == 0)
		printf("The number %d is divisible by 3.\n", n);
	if(sumOfDivided(0,n)==1)
		printf("The number %d is not divisible by 3.\n", n);
	if (sumOfDivided(0, n) == 2)
		printf("The number %d is not divisible by 3.\n", n);
}
/*************************************************************************************
* Function name: gcd
* Input: long int n1, long int n2
* Output:void
* Function Operation: the function gets 2 numbers and checks what is the gcd of them.
					  gcd means the greatest number that is divided by both of the 
					  numbers.
*************************************************************************************/
void gcd(long int n1, long int n2) {
	/*
	n1 should be greater so it switches.
	*/
	if (n2 > n1) 
		return gcd(n2, n1);
	/*
	if the numbers are the same, so it prints itself as the greatest divided.
	*/
	if (n1 == n2)
		printf("GCD=%d\n", n1);
	/*
	if n2 is 0 so n1 is the greatest divided.
	*/
	if (n2 == 0)
		printf ("GCD=%d\n",n1);
	/*
	prints the way we found the gcd, and recursing to the function again,
	but n1 this time will be n2 and n2 will be the rest of n1%n2 as the new n2.
	*/
	else {
		printf("%d*%d+%d=%d(a=%d,b=%d)\n", n2, n1 / n2, n1 % n2, n1, n1, n2);
		return gcd(n2, n1 % n2);
	}
}
/*************************************************************************************
* Function name: countSameDigits
* Input: long long n, int d, int counter
* Output:int
* Function Operation: the function gets an integer number and a digit and prints
					  how many times the digit appears in the number.
*************************************************************************************/
int countSameDigits(long long n, int d, int counter) {
	/*
	counts every digit of the number that is the same as the digit we got to compare,
	and recoursing again with the number divided by 10.
	*/
	if (n % 10 == d) {
		counter++;
		countSameDigits(n / 10, d, counter);
	}
	/*
	after we checked all the digits, returning the counter, which means how many
	times we had the digit inside the number.
	*/
	if (n / 10 == 0)
		return counter;
	/*
	if we haven't checked the whole number, keep recoursing to the next digit.
	*/
	else
		countSameDigits(n / 10, d, counter);
}
/*************************************************************************************
* Function name: countDigit
* Input: long long n, int d
* Output:void
* Function Operation: the function gets a number and a digit	
					  and prints how many times the the digit appears in the number.
*************************************************************************************/
void countDigit(long long n, int d){
	printf("%lld has %d times %d\n", n, countSameDigits(n, d, 0), d);
}
/*************************************************************************************
* Function name: isPalindromeIter
* Input: char str[], int len
* Output:void
* Function Operation: The function gets a char array and the length of the array
*					 and prints if the array is a palindrome or not.
*************************************************************************************/
void isPalindromeIter(char str[], int len) {
	int counter=0;
	/*
	the for loop compares between the chars of the beggining of the array and
	of the end of them. 
	everytime it's the same, it counts it.
	*/
	for (int i = 0; i < len; i++) {
		if (str[i] == str[len - 1]) {
			counter++;
			/*
			if we checked the whole array and compared all the chars and it was
			all the same so we print it's a palindrome.
			*/
			if (counter == len || counter+1==len) {
				printf("The reverse of %s is also %s.\n", str, str);
				break;
			}
			len = len - 1;
		/*
		if the chars was not the same, we print it's not a palindrome.
		*/
		}
		else {
			printf("The reverse of %s is not %s.\n", str, str);
			break;
		}
	}
}
/*************************************************************************************
* Function name: IsDividedBy3Iter
* Input: long long num
* Output:void
* Function Operation: the function gets a number and checks if the
					  number it gets is a divide of 3 or not. the function prints
					  the answer.
*************************************************************************************/
void IsDividedBy3Iter(long long num) {
	int sum=0;
	long long temp = num;
	/*
	the while loop sums up all the digits of the number.
	*/
	while (num > 0) {
		sum = sum + num % 10;
		num = num / 10;
	}
	/*
	after summing up the whole digits, we decreasing the number by 3 eveyrtime
	(like doing modolu3)
	*/
	while (sum >= 3) {
		sum = sum - 3;
	}
	/*
	if modulu3 is 0 so the number is a divide of 3, if its 1 or 2 so it's not.
	*/
	if (sum == 0) {
		printf("The number %lld is divisible by 3.\n", temp);
		return;
	}
	if (sum == 1 || sum==2) {
		printf("The number %lld is not divisible by 3.\n", temp);
		return;
	}
}
int main() {
	//***********************************
	isPalindrome("sun", 3);
	isPalindrome("pop", 3);
	//***********************************
	char pattern[] = "12?1?";
	printAllCombinations(pattern, 5);
	//***********************************
	powRec(3, -3);
	//***********************************
	isDivisibleBy3(123232323231);
	isDivisibleBy3(123232323232);
	//***********************************
	gcd(275, 55);
	gcd(105, 51);
	//***********************************
	countDigit(101141414, 4);
	countDigit(101141414, 1);
	//***********************************
	IsDividedBy3Iter(123232323231);
	//***********************************
	isPalindromeIter("sun", 3);

	int n = 2; // Number of disks
	towerOfHanoi(n, 'A', 'C', 'B');
	return 0;
}
