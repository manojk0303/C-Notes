# C-Notes
NAME : MANOJKUMAR K
ROLL NO : 22Z236

Class Notes 

```c
CELCIUS TO FARENHEIT PROGRAM

#include <stdio.h>

int main(){

    float celsius , farenheit;
    printf("enter celsius :  ");
    scanf("%f", celcius);
    farenheit = (celcius*1.8)+32;
    printf("farenheit  :  %f" , farenheit);
    return 0;
}


FINDING THE SIZE OF EVERY DATA TYPE

#include <stdio.h>

int main(){

    printf(" char %lc\n", sizeof(char));
    printf(" int %lu\n", sizeof(int));
    printf(" float %lu\n", sizeof(float));
    printf(" double %lu\n", sizeof(double));
    printf("long double %lu\n", sizeof(long double));
    printf("short int %lu\n", sizeof(short int));
    printf(" unsigned int %lu\n", sizeof(unsigned int));
    printf(" long int %lu\n", sizeof(long int ));
    printf("long long int %lu\n", sizeof(long long int));
    printf("unsigned long int %lu\n", sizeof(unsigned long int));
    printf("unsigned long long int %lu\n", sizeof(unsigned long long int));
    printf(" signed char %lc\n", sizeof(signed char));
    printf(" unsigned char %lc\n", sizeof(unsigned char));

}

 


FOR LOOPS 

#include <stdio.h>

int main(){
    int i;
    for ( i=0;i<=5;i++){
        printf("%d\n",i);
    }
}



EXAMPLE : MULTIPLES OF 3
 
#include <stdio.h>

int main(){
    int i;
    for ( i=1;i<=10;i++){
        printf("%d\n",i*3);
    }
}
Finding the range upto which the data type could hold

#include <stdio.h>
#include <math.h>
int main(){

   int i,j;
   for(i=1;i<=100;i++){
       j = pow(2,i);
       if(j<0){
           break;
       }
       printf("%d for %d\n",j,i);
   }

   return 0;
}


OUTPUT 👍
1073741824 for 30
UPTO 2^30



FOR FLOAT

#include <stdio.h>
#include <math.h>
int main(){

   int i;
   float j;
   for(i=1;i<=500;i++){
       j = pow(2,i);
       if(j<0 ||   !isfinite(j)){
           break;
       }
       printf("%f for %d\n",j,i);
   }

   return 0;
}

UPTO 
170141183460469231731687303715884105728.000000 for 127

2^127  for float 

FOR DOUBLE

#include <stdio.h>
#include <math.h>
int main(){

   int i;
   double j;
   for(i=1;i<=10000;i++){
       j = pow(2,i);
       if(j<0 ||   !isfinite(j)){
           break;
       }
       printf("%lf for %d\n",j,i);
   }

   return 0;
}


89884656743115795386465259539451236680898848947115328636715040578866337902750481566354238661203768010560056939935696678829394884407208311246423715319737062188883946712432742638151109800623047059726541476042502884419075341171231440736956555270413618581675255342293149119973622969239858152417678164812112068608.000000 for 1023

Upto  2^123


FOR LONG DOUBLE 

#include <stdio.h>
#include <math.h>
int main(){

   int i;
   long double j;
   for(i=1;i<=10000;i++){
       j = pow(2,i);
       if(j<0 ||   !isfinite(j)){
           break;
       }
       printf("%Lf for %d\n",j,i);
   }

   return 0;
}



89884656743115795386465259539451236680898848947115328636715040578866337902750481566354238661203768010560056939935696678829394884407208311246423715319737062188883946712432742638151109800623047059726541476042502884419075341171231440736956555270413618581675255342293149119973622969239858152417678164812112068608.000000 for 1023

Upto  2^123

FOR SHORT INT

#include <stdio.h>
#include <math.h>
int main(){

   int i;
   short int j;
   for(i=1;i<=10000;i++){
       j = pow(2,i);
       if(j<0 ){
           break;
       }
       printf("%hd for %d\n",j,i);
   }

   return 0;
}

16384 for 14

UPTO 2^14

For long int 
4611686018427387904 for 62
Upto 2^62

For long long int 
4611686018427387904 for 62
Upto 2^62

For unsigned long int 
9223372036854775808 for 63
Upto 2^62

For unsigned long long int 
9223372036854775808 for 63
Upto 2^62


Data type	Format Specifier	Size in bytes	Range	Default
char	%c	1	1 character in local character set	
int	%d, %i	4(at least 2)
Natural size of integers in host machine	-2^31 to 2^31	signed
float	%f	4	3×10³⁸ and about as small as 1.4×10⁻⁴⁵	Sinle precision
double	%lf	8	
1.7E-308 to 1.7E+308	Double precision
long double	%Lf	at least 10, usually 12 or 16
Extended precision floating point	3.4E-4932 to 1.1E+4932
(for 10 bytes)	long double

Data type	Format Specifier	Size in bytes	Range	Default
short int	%hd	2 usually	-32,768 to 32,767	
unsigned int	%u	at least 2, usually 4	0 to 4,294,967,295 	
long int	%ld, %li	at least 4, usually 8	-2,147,483,648 to 2,147,483,647 	
long long int	%lld, %lli	at least 8	-(2^63) to (2^63)-1 	
unsigned long int	%lu	at least 4	0 to 4,294,967,295	
unsigned long long int	%llu	at least 8	0 to 18,446,744,073,709,551,615 	
%d - to print value in integer format
%o - to print value in octal format
%x - to print value in hexadecimal format (letters will print in lowercase)
%X - to print value in hexadecimal format (letters will print in uppercase)
/*Printing value in Decimal, Octal, Hexadecimal using printf in C.*/
 
#include <stdio.h>
 
int main()
{
    int value=2567;
     
    printf("Decimal value is: %d\n",value);
    printf("Octal value is: %o\n",value);
    printf("Hexadecimal value is (Alphabet in small letters): %x\n",value);
    printf("Hexadecimal value is (Alphabet in capital letters): %X\n",value);
     
    return 0;   
}




TERNARY OPERATOR 
variable = (condition) ? Expression2 : Expression3;

TO FIND GREATEST OF TWO NUMBERS USING TERNARY OPERATOR
#include <stdio.h>
int main()
{   int a=12,b=5;
    int max = (a>b) ? 1 : 0;
    printf("max : %d ",max);
    return 0;
}


TO FIND ODD OR EVEN USING TERNARY OPERATORS

#include <stdio.h>

int main()
{   int a;
    scanf("%d",&a);
    a%2==0 ? printf("even") : printf("odd");
}


TO FIND GREATEST OF THREE NUMBERS USING TERNARY OPERATOR

#include <stdio.h>
int main()
{   int a=100,b=3,c=2;
    (a>b && a>c) ? printf("%d is big",a) :((b>c                                                                                                                                                                                                                                                                                                                && b>a) ? printf("%d is big ",b) : printf("%d is big ",c));
}






Bitwise operators in c

1.	The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.  
2.	The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. 
3.	The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different. 
4.	The << (left shift) in C or C++ takes two numbers, the left shifts the bits of the first operand, and the second operand decides the number of places to shift. 
5.	The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, and the second operand decides the number of places to shift. 
6.	The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it.



// C Program to demonstrate use of bitwise operators
#include <stdio.h>
int main()
{
	// a = 5(00000101), b = 9(00001001)
	unsigned char a = 5, b = 9;

	// The result is 00000001
	printf("a = %d, b = %d\n", a, b);
	printf("a&b = %d\n", a & b);

	// The result is 00001101
	printf("a|b = %d\n", a | b);

	// The result is 00001100
	printf("a^b = %d\n", a ^ b);

	// The result is 11111010
	printf("~a = %d\n", a = ~a);

	// The result is 00010010
	printf("b<<1 = %d\n", b << 1);

	// The result is 00000100
	printf("b>>1 = %d\n", b >> 1);

	return 0;

}



#include <stdio.h>

int main ()
{
  char x[10];
  scanf("%[a-zA-Z ]",x);
  printf("%s",x);
}
//scanf("%[^+-*/]",x); for termination with arithmetic operators
//^ represents which do not be given and when given should me terminated




#include <stdio.h>

int main()
{
    int num1,num2,result,con;
    char op;
    con =1;

    do{
        printf("Enter two numbers followed by first letter of the operation in small case and to exit give operation as e : ");
        scanf("%d %d ", &num1,&num2);
        scanf("%c", &op);
        printf("%d %d ",num1,num2);
        printf("%c",op);
        switch(op){
            case 'a':
                result = num1 + num2;
                break;
            case 's':
                result = num1 - num2;
                break;
            case 'm':
                result = num1 * num2;
                break;
            case 'd':
                result = num1 / num2;
                break;
            case 'e':
                con = 0;
                break;
            default:
                printf("INVALID OPERATION ...\n");
            
        }
    printf("\nthe resulting number is %d \n",result);
    }while(con);
    
    return 0;
}


get one character as input using scanf , getchar , getch ,getche 
write the function prototype for getch, getchar ,getche
i.e.what it takes and what it returns

get input for 1 string without spaces using scanf , gets 
get 1 input of string with spaces (gets)
get paragrapgh (till enter is pressed)
get multiple paragraph as input 
get input till charcter d is pressed

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character ");
    scanf("%c", &ch);
    return 0;
}


It gets a character after pressing enter if more character is given it takes the first character
#include <stdio.h>

int main()
{
    char ch = getchar();
    printf("%c " ,ch);
    return 0;
}


It also gets a character but in this case there is no necessary to press enter , it after a character is pressed it takes that character and control flow goes to nest statement . an important thing is that it will not display the character that you type on the screen .
#include <stdio.h>

int main()
{
    char c = getch();
    printf(" given character is %c ",c );
    return 0;
}



It is similar to getch but one difference is that it displays the character that you type on the screen . 
#include <stdio.h>

int main()
{
    char c = getche();
    printf(" given character is %c ",c );
    return 0;
}



#include <stdio.h>

int main()
{
    char str[10];
    scanf("%s",str);
    printf("Given string is %s ",str );
    return 0;
}


#include <stdio.h>

int main()
{
    char str[10];
    gets(str);
    printf("Given string is %s ",str );
    return 0;
}



#include <stdio.h>

int main()
{
    int paraLen ;
    printf("no of paras  : ");
    scanf("%d",&paraLen);
    char para[paraLen][100];
    for(int i=0;i<paraLen+1;i++){
        gets(para[i]);
    }
    for(int j=0;j<paraLen+1;j++){
        printf("%s\n",para[j]);
    }

    return 0;
}



#include <stdio.h>

int main() {
	int sum,i;
	int arr[10];
	sum = 0;
	for (i=0;i<10;i++){
    	scanf("%d",&arr[i]);
    	sum += arr[i];
	}
	int len = sizeof(arr)/sizeof(int);
	float avg = (float) sum/ (float) len;
	printf("%f",avg);
	return 0;
}


SWAPPING TWO NUMBERS
#include <stdio.h>

int main() {
	int sizeofarr = 5;
	int arr[sizeofarr];
	int i;
	// GETTING INPUTS
	for (i=0;i<sizeofarr;i++){
   	 scanf("%d",&arr[i]);
    }
	int len = sizeof(arr)/sizeof(int);
	//  SWAPPING NUMBERS IF ITS LENGTH IS GREATER THAN 1
 	if(len!=1){
    	for(i=0;i<len-1;i=i+2){
  	 
        	int temp = arr[i];
        	arr[i] = arr[i+1];
        	arr[i+1] = temp;
        	}];
    	}
	// PRINTING ALL ELEMENTS  

	for(i=0;i<len;i=i+1){
    	printf("%d  ",arr[i]);
	}
    
	return 0;
}


GETTING TWO DIMENSIONAL ARRAY AND PRINTING THEM AND GETTING THEIR SUM

#include <stdio.h>
#define row 2
#define col 3

int main() {
    
int sum = 0;
	f	int arr1[row][col] ;
	int arr2[row][col];
	or (int i=0;i<row;i++){
    	for (int j=0;j<col;j++){
       	scanf("%d",&arr1[i][j]);
    	}
   	 
	}
	printf("[ \n");
 	for (int i=0;i<row;i++){
     	printf("[ ");
    	for (int j=0;j<col;j++){
       	printf("%d  ",arr1[i][j]);
       	sum+= arr1[i][j];
    	}
    	printf("]\n");
   	 
	}
	printf("]\n");
	printf("%d",sum);
 
    
	return 0;
}


PRINTING THEIR ADDRESS
#include <stdio.h>
#define row 2
#define col 3

int main() {
    
	int arr1[row][col] ;
	int arr2[row][col];

	for (int i=0;i<row;i++){
    	for (int j=0;j<col;j++){
       	scanf("%d",&arr1[i][j]);
    	}
   	 
	}
	printf("[ \n");
 	for (int i=0;i<row;i++){
     	printf("[ ");
    	for (int j=0;j<col;j++){
       	printf("%u ",&arr1[i][j]);
      	 
    	}
    	printf("]\n");
   	 
	}
      printf("Hence the array stores the values in row major order ");

 
    
	return 0;
}









PRINTING UPPER TRIANGLE OF THE MATRIX
#include <stdio.h>
#define row 3
#define col 3

int main() {
    
	int arr1[row][col] ;
	int con ;

	for (int i=0;i<row;i++){
    	for (int j=0;j<col;j++){
       	scanf("%d",&arr1[i][j]);
    	}
   	 
	}
    

	printf("[ \n");
 	for (int i=0;i<row;i++){
     	printf("[ ");
     	con=0;
    	for (int j=0;j<col;j++){
       	if(i==j){
            	con=1;
        	}
        	if(con==1){
            	printf("%d ",arr1[i][j]);
        	}else{
            	printf("0 ");
        	}
      	 
    	}
    	printf("]\n");
   	 
	}

 
    
	return 0;
}


PRINTING LOWER TRIANGLE O FTHE MATRIX

// Online C compiler to run C program online
#include <stdio.h>
#define row 3
#define col 3

int main() {
    
	int arr1[row][col] ;
	int con ;

	for (int i=0;i<row;i++){
    	for (int j=0;j<col;j++){
       	scanf("%d",&arr1[i][j]);
    	}
   	 
	}
    

	printf("[ \n");
 	for (int i=0;i<row;i++){
     	printf("[ ");
     	con=1;
    	for (int j=0;j<col;j++){
      	 
        	if(con==1){
            	printf("%d ",arr1[i][j]);
        	}else{
            	printf("0 ");
        	}
        	if(i==j){
            	con=0;
        	}
      	 
    	}
    	printf("]\n");
   	 
	}

 
    
	return 0;
}



PRINTING DIAGONAL ELEMENTS

#include <stdio.h>
#define row 3
#define col 3

int main() {
    
	int arr1[row][col] ;
    

	for (int i=0;i<row;i++){
    	for (int j=0;j<col;j++){
       	scanf("%d",&arr1[i][j]);
    	}
   	 
	}
    

	printf("[ \n");
 	for (int i=0;i<row;i++){
     	printf("[ ");
    	for (int j=0;j<col;j++){
        	if(i==j){
            	printf("%d ",arr1[i][j]);
        	}else{
            	printf("0 ");
        	}
      	 
    	}
    	printf("]\n");
   	 
	}

	return 0;
}


1. Write a program to find the sum of the digits of a given number using a while loop.

int main()
{
    int a,sum=0;
    printf("enter a number ");
    scanf("%d",&a);
    while(a>0){
        sum += (a%10);
        a=a/10;
    }
    printf("sum of digits is : %d ",sum);

    return 0;
}

2.Write a program that takes a character as input and uses the ternary operator to print
whether the character is a vowel or a consonant.


#include <stdio.h>

int main()
{
    int ch;
    printf("enter a character ");
    int condition = scanf("%[aeiouAEIOU]c",&ch);
    printf("%s",condition?"vowel":"consonant");

    return 0;
}


3. Write a program that takes an integer as input, which represents a month number (1-12),
and uses the switch statement to print the corresponding month name.


#include <stdio.h>

int main()
{
    int month;
    printf("enter a month number ");
    scanf("%d",&month);
    switch(month){
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("INVALID INPUT");
    }

    return 0;
}

4. Write a program to check if it is a palindrome

#include <stdio.h>

int main()
{
    char word[20];
    scanf("%s",&word);
    int front=0,reverse=strlen(word)-1;
    int ispallindrome = 1;
    int half = strlen(word)/2;
    while(reverse>half){
        if(word[front]!=word[reverse]){
            ispallindrome = 0;
        }
        front+=1;
        reverse-=1;
    }
    printf(ispallindrome ? "pallindrome " :"not a pallindrome");

    return 0;
}


5. Write a program using for to print the following pattern.
*
* *
* * *
* * * *
* * * * *

#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

6. Write a program that takes a 2D array of integers as input and prints the largest element in the
array.

#include <stdio.h>

int main()
{
    int rowLen,colLen,i,j,max;
    printf("Enter the size of the 2D array : ");
    scanf("%d %d",&rowLen,&colLen);
    int arr[rowLen][colLen];
    for(i=0;i<rowLen;i++){
        for(j=0;j<colLen;j++){
            printf("Enter the value of index [%d] [%d] : ",i,j);
            scanf("%d",&arr[i][j]);
            if(i==0 && j==0){
                max=arr[0][0];
            }
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    printf("max : %d",max);
}


7. Write a program that takes a 2D array of characters as input and prints each element in the array
on a new line.

#include <stdio.h>

int main()
{
    int rowLen=4,colLen=4,i,j;
    char arr[rowLen][colLen];
    for(i=0;i<rowLen;i++){
        for(j=0;j<colLen;j++){
            printf("Enter the character of index [%d] [%d] : ",i,j);
            scanf("\n");
            scanf("%c",&arr[i][j]);
        }
    }
    for(i=0;i<rowLen;i++){
        for(j=0;j<colLen;j++){
            printf("%c\n",arr[i][j]);
        }
    
    }
    
}

8. Write a program that takes an integer as input and uses the printf function to print the integer in
hexadecimal format. Use the %x format specifier to print the hexadecimal number.

#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    printf("%x",num);
}

9. Write a program that takes a string and an integer as input and uses the printf function to print
them. Use the %s format specifier to print the string and the %5d format specifier to print the
integer with a minimum width of 5 characters.

#include <stdio.h>

int main()
{
    int num;
    char str[10];
    printf("Enter a number and a string : ");
    scanf("%d %s",&num,&str);
    printf("number : %5d  string : %s",num,str);
}

10. Write a program that generates a random number between 1 and 100 and asks the user to guess
the number. Use a do-while loop to keep asking the user for guesses until they correctly guess the
number.

#include <stdio.h>

int main()
{
    int num , randomNum = rand()%100+1;
    do{
        printf("Guess number : ");
        scanf("%d",&num);
        
    }while(num!=randomNum);
    printf("Correct Guess ");
}


#include <stdio.h>
int sum(int x,int y){
	int s = x+y;
	return s;
}
    
void greet(){
	printf("hello world");
}

int main()
{
    
	greet();
	printf("\nsum is  %d",sum(2,3));

	return 0;
}



CONTINUE

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i;
    for (i=1;i<=500;i++){
        if (i%5==0){
           continue; 
        }
        printf("%d\n",i);
        
    }

    return 0;
}


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,j;
    for(i=1;i<=10;i++){
        for(j=1;j<=5;j++){
            int x =i*j;
            if (x%5==0) continue;
            printf("%d\n",x);
        }
        printf("\n");
    }

    return 0;
}




BREAK

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,j;
    for(i=1;i<=10;i++){
        for(j=1;j<=5;j++){
            int x =i*j;
            if (x%5==0) break;
            printf("%d\n",x);
        }
        printf("\n");
    }

    return 0;
}


/*Printing value in Decimal, Octal, Hexadecimal using printf in C.*/
 
#include <stdio.h>
 
int main()
{
    int value=31;
    printf(" decimal = %d , octal = %o , hexa decimal = %X \n",value,value,value);
     
    return 0;   
}


To the the numbers with fixed width and inserting number in the last 


#include <stdio.h>

int main()
{
    int value=31;
    printf(" decimal = %10d , octal = %10o , hexa decimal = %10X \n",value,value,value);

    return 0;
}

// to get two decimals after that number 
printf(" decimal = %.2f ,value);


Takes only five digits of the input
#include <stdio.h>
 
int main()
{
    long int x;
    scanf("%5d",&x);
    printf("%li",x);
     
    return 0;   
}



Same for float


#include <stdio.h>
 
int main()
{
    float x;
    scanf("%5f",&x);
    printf("%f",x);
     
    return 0;   
}


ARRAY

#include <stdio.h>
 
int main()
{
    int arr[4] = {1,2,3,4};
    int a[4];
    // initialization method
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
     
    return 0;   
}




#include <stdio.h>

int main()
{
    int arr[4] = {1,2,3,4};
    printf("%d",arr);
    printf("%d\n",&arr);
    printf("%d\n",&arr[0]);
    printf("%d\n",&arr[1]);
  
    return 0;
}




#include <stdio.h>
int isFact(int,int);
int isPrime(int+);

int main()
{
    int x=4,n=10;
    primeRange(1,20);

}

int isFact(int  x,int   n){
    if(n%x==0){
        return  1;
    }else{
        return  0;
    }
}

int isPrime(int n){
    int i;
    if(n==1){
        return  "Neither prime  nor composite";
    }
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            return "not a   prime";
        }
    }
    return  "prime";
}

int primeRange(int start,int end){
    int i,j;
    for(i=start;i<=end;i++){
        if(isPrime(i)=="prime"){
            printf("\n%d",i);
        }
    }
}



#include <stdio.h>

int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int fibonacci(int n){
    if(n==0 || n==1){
        return n==1 ? 1 : 0;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int towerOfHonoi(int n,char s,char d,char a){
    if(n==1){
        printf("\nThe disk 1 is moved from %c to %c",s,d);
        return;
    }
    towerOfHonoi(n-1,s,a,d);
    printf("\nThe disk %d is moved from %c to %c",n,s,d);
    towerOfHonoi(n-1,a,d,s);
}

int main()
{
    printf("factorila 5 : %d",factorial(5));
    printf("\nfibinacci 5 : %d",fibonacci(6));
    towerOfHonoi(3,'A','C','B');

    return 0;
}


POINTERS

#include <stdio.h>
void printarr(int* , int);
int sort(int* , int);

int main()
{
	int arr[5] = {4,5,3,1,2};
	sort(arr,5);

	return 0;
}
void printarr(int arr[5],int l){
	int i;
	for(i=0;i<l;i++){
    	printf(" %d ",arr[i]);
	}
}

int sort(int arr[5],int l){
	int i,j,temp;
	for(i=0;i<l;i++){
    	for(j=i+1;j<l;j++){
        	if(arr[i]>arr[j]){
            	temp = arr[i];
            	arr[i] = arr[j];
            	arr[j] = temp;
        	}
    	}
	}
	printarr(arr,5);
}


#include <stdio.h>

int main()
{
	// you can call various functions HERE
}

int longStringLength(char arr[][20],int l1, int l2){
	int i,max=0;
	for(i=0;i<l1;i++){
    	if(max<strlen(arr[i])){
        	max = strlen(arr[i]);
    	}
	}
	return max;
}


int shortStringLength(char arr[][20],int l1, int l2){
	int i,min=strlen(arr[0]);
	for(i=0;i<l1;i++){
    	if(min>strlen(arr[i])){
        	min= strlen(arr[i]);
    	}
	}
	return min;
}

int threshold(char arr[][20],int l1, int l2,int t){
	int i , count = 0;
	for(i=0;i<l1;i++){
    	if(strlen(arr[i])>t){
        	count += 1;
    	}
   	 
	}

	return count;
}

int averageFinder(char arr[][20],int l1, int l2){
	int i,avg , sum = 0;
	for(i=0;i<l1;i++){
    	sum += strlen(arr[i]);
	}
	avg = sum/l1;
	return avg;
    
    
}

STRUCT IN C

Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.
Unlike an array, a structure can contain many different data types (int, float, char, etc.).


NOTES

The structure member can be accessed only through a structure variable using the dot operator .
#include <stdio.h>

struct tshirt {
	char name[10];
	int price ;
	char size;
	int code[7];
};

int main()
{   int o , i;
	char name[10];
	for(o=0;o<2;o++){
    	printf("ENTER THE NAME OF THE SHIRT : ");
    	scanf("%s",name);
    	struct tshirt name;
    	scanf("%s",name.name);
    	scanf("%d",&name.price);
    	scanf("\n");
    	scanf("%c",&name.size);
    	scanf("\n");
    	for(i=0;i<7;i++){
        	scanf("%d",&name.code[i]);
    	}  
	}
    
    
	// printf("%s %d %c",zap.name,zap.price,zap.size);
    
	// for(i=0;i<7;i++){
	// 	printf(" %d",zap.code[i]);
	// }
	return 0;
}

  


Copying string
#include <stdio.h>

int main()
{
	char str1[10] = "hello";
	char str2[10];
	strcpy(str2,str1);
	printf("%s",str2);

	return 0;
}

Another way to create struct variable
#include <stdio.h>
struct person {
    	char name[10];
    	int id;
	}e={"ram",2};
int main()
{
	printf("%s %d",e.name,e.id);

	return 0;
}

 

#include <stdio.h>
struct person {
    	char name[10];
    	int id;
	};
int main()
{   
	struct person e;
	strcpy(e.name,"ram");
	e.id =2;
	printf("%s %d",e.name,e.id);

	return 0;
}

#include <stdio.h>
struct person {
    	char name[10];
    	int id;
	};
int main()
{   
	struct person e = {.name="ram", .id=1};
	printf("%s %d",e.name,e.id);

	return 0;
}


Creating array using struct
#include <stdio.h>

int main() {
  // creating a student structure template
  struct student {
	char name[64];
	int height;
	int age;
  };
 
  // creating a student structure array variable
  struct student stdArr[3] = {{"one",12,1},{"two",22,2},{"three",32,3}};
  // or
//  struct student stdArr[3] ;
//   stdArr[0]= (struct student) {"one",12,1};
//   stdArr[1] = (struct student) {"two",22,2};
//   stdArr[2] = (struct student) {"three",32,3};
//or
//  stdArr[0]= (struct student) {.name="one",.height=12,.age=1};
//  stdArr[1] = (struct student) {.name="two",.height=22,.age=2};
//  stdArr[2] = (struct student) {.name="three",.height=32,.age=3};

  // other variables
  int i;
 
  // output
  for (i = 0; i < 3; i++) {
	printf("\nStudent #%d Detail:\n", (i+1));
	printf("Name: %s\n", stdArr[i].name);
	printf("Height: %d\n", stdArr[i].height);
	printf("Age: %d\n", stdArr[i].age);
  }
 
  return 0;
}



#include <stdio.h>

int main() {
  // creating a student structure template
  struct student {
	char name[64];
	int height;
	int age;
  };
 
  // creating a student structure array variable
  struct student stdArr[3];
 
  // other variables
  int i;
 
  // taking user input
  for (i = 0; i < 3; i++) {
	printf("Enter detail of student #%d\n", (i+1));

	printf("Enter Name: ");
	scanf("%s", &stdArr[i].name);
 
 
	printf("Enter Height: ");
	scanf("%d", &stdArr[i].height);
    
	printf("Enter Age: ");                                                                                                                                                                                                                            
	scanf("%d", &stdArr[i].age);
  }
 
  // output
  for (i = 0; i < 3; i++) {
	printf("\nStudent #%d Detail:\n", (i+1));
	printf("Name: %s\n", stdArr[i].name);
	printf("Height: %d\n", stdArr[i].height);
	printf("Age: %d\n", stdArr[i].age);
  }
 
  return 0;
}

#include <stdio.h>

int main() {
  // creating a student structure template
  struct student {
    char name[64];
    int height;
    int age;
    float marks[5];
    float avg;
  };
 
  // creating a student structure array variable
  struct student stdArr[3];
 
  // other variables
  int i,j;
  float sum;
 
  // taking user input
  for (i = 0; i < 3; i++) {
    printf("Enter detail of student #%d\n", (i+1));

    printf("Enter Name: ");
    scanf("%s", &stdArr[i].name);
 
 
    printf("Enter Height: ");
    scanf("%d", &stdArr[i].height);
    
    printf("Enter Age: ");
    scanf("%d", &stdArr[i].age);
    
    printf("ENter the Marks \n");
    
    sum=0;
    for(j=0;j<5;j++){
    	printf("Mark of subject %d : ",(j+1));
    	scanf("%f",&stdArr[i].marks[j]);
    	sum+=stdArr[i].marks[j];
    }
    stdArr[i].avg = sum/5;
  }
 
  // output
  for (i = 0; i < 3; i++) {
    printf("\nStudent #%d Detail:\n", (i+1));
    printf("Name: %s\n", stdArr[i].name);
    printf("Height: %d\n", stdArr[i].height);
    printf("Age: %d\n", stdArr[i].age);
    for(j=0;j<5;j++){
    	printf("\nMark of subject %f  ",stdArr[i].marks[j]);
   	 
    }
    printf("\nAVERAGE: %f0", stdArr[i].avg);
  }
 
  return 0;
}


#include <stdio.h>

 // creating a student structure template
  struct student {
    char name[64];
    int height;
    int age;
    int marks[5];
    int avg;
  };  
 
 
void print(struct student x,int i){
	printf("Person no   %d\n",(i+1));
	printf("Name : %s\n",x.name);
	printf("Height : %d \n",x.height);
	printf("Age : %d\n",x.age);
	printf("Average : %d\n",x.avg);
}

void prints(struct student x[3],int l) {
	int i;
	for(i=0;i<l;i++){
    	print(x[i],i);
	}
}

void calculate_average(struct student x[3],int l){
	int i,j,sum;
	for(i=0;i<l;i++){
    	sum=0;
    	for(j=0;j<5;j++){
        	sum+=x[i].marks[j];
    	}
    	float avg = (float)sum/5;
    	x[i].avg = avg;
	}
    
	prints(x,3);
}


int main() {
 
 
  // creating a student structure array variable
  struct student stdArr[3] = {{"one",12,1,{1,2,3,4,5},0},{"two",22,2,{1,2,3,4,5},0},{"three",32,3,{1,2,3,4,5},0}};
 
  //all function call goes here

 
}

				

POINTERS 

The pointer variable should be declared with * symbol 
ex: int* p = &x;

When you print the poiner variable prefixed with *  it gives the value of the address which is stored by that pointer.
Ex : printf(“%d “,*p); → deferencing the pointer

#include <stdio.h>

int main()
{
	// int x = 5;
	// int* add = &x;
	// printf("x = %d add = %p",x,add);
	// printf("\nx = %p add = %p",&x,add);
	// printf("\nx = %d add = %d",x,*add);
    
	// float x = 5;
	// float* add = &x;
	// printf("x = %f add = %p",x,add);
	// printf("\nx = %p add = %p",&x,add);
	// printf("\nx = %f add = %f",x,*add);
    
	// float f = 2.5 ,*ptr = &f;
	// printf("%f  %f\n",f,*ptr);
	// printf("%p  %p\n",&f,ptr);

	return 0;
}



#include <stdio.h>

int main()
{
	int n1[] = {1,11,21,33} , n2=9;
	int *p1 = n1;
	int *p2 = &n2;
	printf("n1=%p n2=%d p1=%p p2=%p \n",n1,n2,p1,p2);
	printf("&n1=%p &n2=%p &p1=%p &p2=%p \n",&n1,&n2,&p1,&p2);
	printf("*p1=%d *p2=%d ",*p1,*p2);
	// when you prefix & with pointer it does not return the address that //it stored but instead it returns the address of that pointer itself
	// so why &p1 != &n1
	return 0;
}

n1=0x7ffc99931490      n2=9         		       p1=0x7ffc99931490     p2=0x7ffc9993147c
&n1=0x7ffc99931490   &n2=0x7ffc9993147c      &p1=0x7ffc99931480  &p2=0x7ffc99931488
*p1=1       *p2=9

GEETING THE ELEMENTS OF THE ARRAY USING POINTER

If p1 is the pointer then 
*p1 	  —> first element of the array
*(p1+1)  —> second element of the array
*(p1+2)  —> third element of the array
And so on

int i;
  for(i=0;i<(sizeof(n1)/sizeof(n1[0]));i++){
  	printf("p1+%d %d\n",i,*(p1+i));
      //p1++ can also be used instead of p1+i
  }


p1+0 1
p1+1 11
p1+2 21
p1+3 33







Using the concept of pointers find the sum of the elements in the array
S
#include <stdio.h>

int main ()
{
  int n1[] = { 1, 11, 21, 33 };
  int *p1 = n1;

  int i,sum=0;
 
  for(i=0;i<(sizeof(n1)/sizeof(n1[0]));i++){
  	sum = sum + *(p1++);
  }
  printf("sum = %d",sum);
  return 0;
}

Static variables have the property of preserving their value even after they are out of their scope! Hence, a static variable preserves its previous value in its previous scope and is not initialized again in the new scope.

For static only the lifetime is throughout th execution of that program but the scope is within the function it is declared.

void print1(){
	int i = 5;
	printf("\n%d",++i);
    
    
}
void print(){
	static int i =5;
	printf("\n%d",++i);
}



int main()
{
	int i=0;
	for(i=0;i<10;i++){
    	print();
	}
	for(i=0;i<10;i++){
    	print1();
	}
    


	return 0;
}


6
7
8
9
10
11
12
13
14
15
6
6
6
6
6
6
6
6
6
6



#include <stdio.h>

void test(){
	static int x;
}

int main()
{
	register int  i;
	test();
	printf("%d",x);
    
	return 0;
}

main.c: In function ‘main’:
main.c:26:17: error: ‘x’ undeclared (first use in this function)


register vaiable is like auto variable but it is stored in the register.
if there is no space in the register then it stores in the ram without even telling.




Swapping two numbers using pointers
#include <stdio.h>

void swap(int *pa,int *pb){
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main()
{
	int a=2,b=5;
	swap(&a,&b);
	printf("%d %d",a,b);

    
	return 0;
}



include <stdio.h>

int main()
{
	char *s = "hello";
	printf("%s\n",s);
	int *i[] = {1,2,3};
	printf("%d\n",*(i+1));
	printf("%d",*(i+2));

	return 0;
}



#include <stdio.h>

void fun(int *arr, unsigned int n)
{
	int i;
	for (i=0; i<n; i++)
   	 printf("%d ", ++arr[i]);
}


int main()
{
	int *arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	unsigned int n = sizeof(arr)/sizeof(arr[0]);
	fun(arr, n);
	int i ;
	printf("\n");
	for (i=0; i<n; i++)
   	 printf("%d ", arr[i]);
	return 0;
}


Dynamic Memory Allocation


C malloc() method
The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 
Syntax of malloc() in C
ptr = (cast-type*) malloc(byte-size)
For Example:
ptr = (int*) malloc(100 * sizeof(int));
Since the size of int is 4 bytes, this statement will allocate 400 bytes of memory. And, the pointer ptr holds the address of the first byte in the allocated memory.
 
 
If space is insufficient, allocation fails and returns a NULL pointer




#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Hello World");
    int *p,i,n=4;
    p = (int*) malloc(sizeof(int)*n);
    if (p == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else{

        printf("array of size 4 created at %p \n",p);
        printf("Enter the elements : \n");
        for(i=0;i<n;i++){
            printf("Element %d : ",i);
            // scanf("%d",(p+i)); //using pointer arithmetic
            scanf("%d",&p[i]);    //using subscript
        }
        for(i=0;i<n;i++){
            // printf(" %d",*(p+i));  //using pointer arithmetic
            printf(" %d",p[i]);      //using subscript
    }


    return 0;
}




#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Hello World");
    int *p,i,n=4;
    p = (int*) malloc(sizeof(int)*n);
    printf("array of size 4 created at %p \n",p);
    for(i=0;i<n;i++){
        printf("Element %d  i-%d   \n",p[i],i);// malloc initializes with garbage value
        
    }
    
    free(p);
    printf("Memory deallocated");

    return 0;
}

 C calloc() method
1.	“calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. it is very much similar to malloc() but has two different points and these are:
2.	It initializes each block with a default value ‘0’.
3.	It has two parameters or arguments as compare to malloc().
Syntax of calloc() in C
ptr = (cast-type*)calloc(n, element-size);
here, n is the no. of elements and element-size is the size of each element.
For Example: 
ptr = (float*) calloc(25, sizeof(float));
This statement allocates contiguous space in memory for 25 elements each with the size of the float.
 
 
If space is insufficient, allocation fails and returns a NULL pointer.


#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Hello World");
    int *p,i,n=4;
    p = (int*) calloc(n,sizeof(int));
     if (p == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
        printf("array of size 4 created at %p \n",p);
        for(i=0;i<n;i++){
            printf("Element %d  i-%d   \n",p[i],i);// calloc initializes with zero
            
        }
    }
    free(p);
    printf("Memory deallocated");

    return 0;
}



#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Hello World");
    int *p,i,n=4,*newP,newN=8;
    p = (int*) calloc(n,sizeof(int));
     if (p == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
        printf("array of size 4 created at %p \n",p);
        for(i=0;i<n;i++){
            p[i] = 10+i;
            printf("Element %d  i-%d   \n",p[i],i);// calloc initializes with zero
            
        }
        
        //reallocation 
         newP = (int*) realloc(p,sizeof(int)*newN);
        for(i=0;i<newN;i++){
            printf("Element  %d  address-%p   \n",p[i],&p[i]);
            
        }
    }
    free(p);
    printf("Memory deallocated");

    return 0;
}

GETS SENTENCE AS INPUT , DINAMICALLY  ALLOCATE MEMORY FOR THAT SENTENCE AND COUNT THE NUMBER OF WORDS IN THAT SENTENCE


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int count;
    char* str = (char*) malloc(sizeof(char)*100);
    printf("Enter a sentence : ");
    fgets(str,100,stdin);
    while(*str!='\0' ){
        if(*str ==' '){
            count++;
        }
        
        str++;
    }
    printf("\nwords = %d",count);
    return 0;
}

				Array of pointers
In C, a pointer array is a homogeneous collection of indexed pointer variables that are references to a memory location. It is generally used in C Programming when we want to point at multiple memory locations of a similar data type in our C program. We can access the data by dereferencing the pointer pointing to it.
Syntax:
pointer_type *array_name [array_size];
Here,
●	pointer_type: Type of data the pointer is pointing to.
●	array_name: Name of the array of pointers.
●	array_size:  Size of the array of pointers.
Note: It is important to keep in mind the operator precedence and associativity in the array of pointers declarations of different type as a single change will mean the whole different thing. For example, enclosing *array_name in the parenthesis will mean that array_name is a pointer to an array.

// C program to demonstrate the use of array of pointers
#include <stdio.h>

int main()
{
	// declaring some temp variables
	int var1 = 10;
	int var2 = 20;
	int var3 = 30;

	// array of pointers to integers
	int* ptr_arr[3] = { &var1, &var2, &var3 };

	// traversing using loop
	for (int i = 0; i < 3; i++) {
		printf("Value of var%d: %d\tAddress: %p\n", i + 1, *ptr_arr[i], ptr_arr[i]);
	}

	return 0;
}

Output
Value of var1: 10    Address: 0x7fff1ac82484

Value of var3: 30    Address: 0x7fff1ac8248c
Explanation:
 
 
As shown in the above example, each element of the array is a pointer pointing to an integer. We can access the value of these integers by first selecting the array element and then dereferencing it to get the value.




Refer pointers to array using bragadeesh notes

Write a program to get the sum of all elements in the matrix using the pointers to the two dimensional array .
#include <stdio.h>

int main()
{

	int arr[2][3] = {{1,2,3},{4,5,6}};

	// array of pointers to integers
	int (*ptr_arr)[3] = arr;
	int i,j,sum=0;
	for(i=0;i<2;i++){
	    for(j=0;j<3;j++){
	        sum += *(*(ptr_arr+i)+j);
	    }
	}
    printf("sum %d",sum);

	return 0;
}


```
