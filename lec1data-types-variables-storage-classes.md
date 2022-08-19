


## Data types 


data type is used for declaraing the type of a variable. 
- in c programming, data types determine the type and size of data associated with variables. before storing any value in a variable, first programmer should decide its type 
- data represents the form numbers(integer or real numbers), characters, strings(collection of characters)



## integer data types for signed data 
(signed) char       -128 ~ 127           
(signed) short int       
int              -2147483~ 2147482
long int 
long long int 

- short int also referred by just short, int is assume short int is synoymous with short 
- long int also referred just long, int is assume 
- long long int also referred by jsut long long, int is assumed 

sizes of int and long depends upon the compiler and machine for which the code to be generated 
meaning of memory size: the compiler gcc will generate the code allocate 64 bits long variable


## integer data types for unsigned data 
unsigned char 
unsigned short int 
unsigned int 
unsigned long int 
unsigned long long int 




generally 
char 8 bits 
int 32 bits 
short 16 bits 
long 32 bits 
long long 64 

C integer data types, their storage sizes and value ranges 

the C standard does not fix the storage sizes of different data types, it only talks about the minimum and maximum values 

these data types will always be fixed sizes irrespective of compilers 

short(signed or unsigned) is always 2 bytes 
char (signed or unsigned) is always 1 byte
long long(signed or unsigned) is always 8 bytes 



## Integer data type: char 
this is an itneger data type to store a single character value or 1 byte or signed integer value +ve or -ve value 

a char data type variable consumes 1 byte 

char happens to be the smallest integer data 
there is no other special meaning for the char data, it is just another integer data type. 

## range of char data types 

char range: -128 ~ 127 
- a char data type will be used to store 1 byte of signed data 
- unsigned char range 0 ~ 255
an unsigned char data will be used to store 1 byte of unsigned data 



## ascii codes 
the american national standard institute ANSI, which developed ANSI C, also developed the ASCII codes. it stands for American Standard code for information interchagne 

by using ascii standard, you can encode 128 different characters. this is why to encode any ascii character you just need 7 bits 

for the machine, everything is a number.  character of number. 
```C
#include<stdio.h>
 
 
int main(){

    char A = 'A';
    printf("the ascii code is %i\n",A);
    printf("the string code is %c\n",A);

}

 

```

## variable definition 

data_type variable_name 
unsigned char xxxxVariable;
xxxxVariable = value;

variable defintion always includes data type followed by variable name, before using a variable, you should define it use data type. you can select the data type according to your program's logic 


```C


int main()
{
    unsigned char variable1 = 100;
    unsigned char variable2 =  200;
    
    unsigned char variable3 = variable2 - variable1;
    printf("%c\n",variable3);
    printf("%i\n",variable3);
    /*
   d 
   10
    */

    return 0;
}
```


| SPECIFIER  | USED FOR |
| ------------- | ------------- |
|%c  | a single character  |
| %s  | a string  |
|%hi  | short (signed) |
| %hu  | short (unsigned)  |
| %Lf  |long double |
| %n | prints nothing |
| %d  | 	a decimal integer (assumes base 10) |
| %i  | a decimal integer (detects the base automatically)  |
| %o  | an octal (base 8) integer |
| %x  | a hexadecimal (base 16) integer  |
| %p  | an address (or pointer)  |
| %f  | a floating point number for floats  |
|%u  | int unsigned decimal  |
| %e  | a floating point number in scientific notation  |
| %E | 	a floating point number in scientific notation |
| %% | the % symbol  |
	



## range calculation 

1 byte signed data representation 
the most significant bit is used to represent the sign of the data 
0 -> data is +ve 
1 -> data is -ve 
7 bits are used to store magnitutes 

##### magnitude is stored in 2's complement format if data is negative. signed data means a dedicated 1 bit is used to encode a sign of the data 

-25 represent the data in 1 byte signed data representation 
signed -   and 25 magnitude 
magnitude will be stored in 2's complement form if data is negative 

7 6 5 4 3 2 1 0
1 1 1 0 0 1 1 1
0XE7
so in signed data context 0xe7 is -25

       16 + 8 + 4 * 0 + 2 * 0 + 1 
0 0 0   1   1    0        0    1
1's complement :
1 1 1    0   0   1        1     0
this is a signed bit
2's complement: 
1 1 1    0   | 0   1        1     1

8 + 4 + 2 + 0  | 0 + 4 + 2 + 1
	     14 -> E     | 7
0Xe7	


25 
7 6 5 4 3 2 1 0 
0 0 0 1 | 1 0 0 1
No need for 2's complement 
      2 ^ 0  = 1 | 2 ^ 3 + 1 => 9
      0x19

### char data type range 
when sign is +ve 

least value   magnitude: 0
highest value magnitude: 127 
so range is 0 to 127 for +ve data 



when sign is -ve 
magitude : -128 
least value : 1 0 0 0 0 0 0 0 
highest value : 1 1 1 1 1 1 1 1
so range is -128 to -1 for -ve values 

unsigned char range: the unsigned chara data type is used to store 1 byte of unsigned data 
in unsigned data representation no particular bit is dedicately used to encode the sign 


1 byte of data representation 
8 bits are used to store magnitude 
least value 0
0 0 0 0 0 0 0 0
hihest value 255 
1 1 1 1 1 1 1 1



## intger data type: short int and unsigned short int 
variable of type short int is used to store 2 bytes of signed data 
variable of type unsigned short int is used to store 2 bytes of unsigned data 
you can just mention short for signed or unsigned short, int will be assume 
short type variable always consumes 2 of memory bytes irrespective of compilers 


####  range calculation of short int 

-25 binary representatin: 
1. binary represent of 25 
0 0 0 0 0 0 0 0 0 1 1 0 0 1
binary representation fo 25 

2. 1s complement format of 25
1 1 1 1 1 1 1 1 1 0 0 1 1 0 


move forward 
3. 2s complement -- representation of -25 
1 1 1 1 1 1 1 1 1 0 0 1 1 1


1 1 1 1 | 1 1 1 1 |1 1 1 0 | 0 1 1 1
0 x f|f| e| 7


representation of 25 
0 0 0 0| 0 0 0 0| 0 0 0 1|  1 0 0 1
0 x 0019

range calculaton of short 
short range: - 32768 to 32767
unsigned short range: 0 to 65535


2 byte unsigned data representation 

16 bits are used to store magnitude 


### Integer data type: int and unsigned int 
int is an integer data type to store signed integer data type 
an int type variable consumes 2 bytes of memory or 4 bytes of memory 

size of an int is decided by the compiler being used to code for your target hardware. i.e. you need to consoult user manual to understand the ze of an int. it is typically 2 or 4 bytes 
unsigned int is an integer data type to store unsigned int data 



### long data type: long and unsigned long 
long is an itneger data type to store signed integer data 

long type variable consumes 4 bytes of memory or 8 bytes of memory 

size of long data type is decided by the compiler being used to generate code for your target hardware. i.e. you need to consult the compiler user manual to understand the size of long. it is typically 4 or 8 bytes 
unsigned long is an integer data type to store unsigned integer data 



### sizeof operator 
sizeof operator of C programming language is used to find out the size of a variable 

the output of the sizeof operator maybe different on different machines because it is compiler dependent 

```C

/**

the size of char in the system is 1
the size of unsigned char in the system is 1
the size of short in the system is 2
the size of unsigned in the system is 2
the size of int in the system is 4
the size of unsigned int in the system is 4
the size of long in the system is 8
the size of unsigned long in the system is 8
the size of long long in the system is 8
*/
#include <stdio.h>

int main()
{
    printf("the size of char in the system is %i\n", sizeof(char));
    printf("the size of unsigned char in the system is %i\n", sizeof(unsigned char));
    printf("the size of short in the system is %i\n", sizeof(short));
     printf("the size of unsigned in the system is %i\n", sizeof(unsigned short));
    printf("the size of int in the system is %i\n", sizeof(int));
    printf("the size of unsigned int in the system is %i\n", sizeof(unsigned int));
    printf("the size of long in the system is %i\n", sizeof(long));
    printf("the size of unsigned long in the system is %i\n", sizeof(unsigned long));
    printf("the size of long long in the system is %i\n", sizeof(long long ));
    return 0;
}

```

creating a variable to store the value of sizeof 

```C

#include <stdio.h>

int main()
{
    unsigned long long longVariable = 100;
    char size = sizeof(longVariable);
    printf("the size of longVariable with long long type is %i", size);
    
     return 0;
}

```

### Variables 

what are variables? 
variables are identifiers for your data 
data are usually stored in the memory so a variable acts as a memory location where the data is stored 

variables names are not stored inside the computer memory, and the compiler replaces their location addresses during the manipulation 

memory locaton address = pointers, values stored in a memory location 

0x0807  01100111
0x0806  11000100
0x0805

variable name assigned to the memory location address to retrieve the data stored 
variables name just exists for programming convenince does not exist post compiation, only its associated memory location address does 

before you use a variable, you have to declare it 
variable defiition is nothing more than letting the compiler know you will need some memory for your program data so it can reserve some 

to define a variable, you only need to state its type followed by a variable name
e.g. if the data type of the variable is char, compiler reserves 1 byte. if the data type is int, compiler reserves 4 btyes 

### defining variable 
C syntax:  data_type variable_name;

when the compiler compiles statements which is not defined before assigned by a value, the compiler throws an error here 

### rules for naming a variable 

1. make sure the variable not is characters no more than 30 of length. some compilers may issue errors 

2. a variable name can only contain alhapbets both upper and lowercases, digits and underscores 

3. the first letter of the variable cannot be a digit. it should be either an alphabet or underscore 

4. you cannot use C standard reserved keyword for variable names 
auto	else	long	switch
break	enum	register	typedef
case	extern	return	union
char	float	short	unsigned
const	for	signed	void
continue	goto	sizeof	volatile
default	if	static	while
do	int	struct	_Packed
double	 


note: variable definition and declaration is different. a variable is defined when the compiler generates instructions to allocate the storage for the variable. a variable is decalred when the compiler is informed that a variable exists along with its type, the compiler does not generate instructions to allocate the storage for the variable at that point

a variable definition is also a declaration, but not all variable declarations are definitions????


## scope of variables 
1. local scope variables exists which is memory cliamed 
2. global scope variables 
a variable scope refers to the accessible of a variable in a given program or function. a variable may only be avaiable with a specific function, it it may be avaialble to the entire c program 

## scopes in function calls 


```C


#include<stdio.h>


void addition();

int value = 0;

int main(){
     value = 900;

    printf("the size of outside variable is %i\n",value);
    //300

    addition();
    
    printf("the size of outside variable is %i\n",value);
 //300
}


void addition(){
    value = 200 + 100;
    printf("the size of variable inside the function addition is %i\n",value);


}
```




```C


#include<stdio.h>


void addition();

int value = 0;

int main(){
    int  value = 900;

    printf("the size of outside variable is %i\n",value);
    //900

    addition();
    //300
    printf("the size of outside variable is %i\n",value);
    //900
}


void addition(){
    value = 200 + 100;
    printf("the size of variable inside the function addition is %i\n",value);


}
```



#### extern keyword 
extern keywords tells the compiler that this variable is defined outside the scope of this file 


## summary global variables 

global: 
scope - global variables are visible to all the functions of a program. even you can access global variables from antoher file of the project 
defeault value - all uninitialized variables will ahve 0 as default value 
lifetime - the end of the execution fo the program

local: 
scope - wihitin the body of the function. local vaiables lose existence once the execution control comes out of the function body 
default value - unpredictable / garbage values 
lifetime - till the execution of a function in which a variable is defined 

## address of variables 
###### &variable_name gives you memory location addres of variable 
###### %p is the format specificer to print a memory address, aka a pointer 


memory location address, addres size is 8 bytes -- 64 bits machine 
a memory location of comptuer memory, data stored in the memory location. 

the pointer -- memory location address size is compiler and hardware specific. you will see the poitner is is of 4 bytes in STM32


```C

#include<stdio.h>


 

int main(){
    int  value = 900;
    printf("the address is %p", &value);
    //900
}


 
```


```C


#include<stdio.h>


 

int main(){
    char a = 'a';
    char b = 'b';
    char c = 'c';

    printf("the address of a is %p\n", &a);
    printf("the address of b is %p\n", &b);
    printf("the address of c is %p\n", &c);
    /*
    the address of a is 0061FF1F
the address of b is 0061FF1E
the address of c is 0061FF1D


    */

}


 

```




this presents a variable, variabels are represented by a variable data type 
```C
unsigned long int address = &variable;
```
this is a pointer data, pointer data are represented by pointer data 
we are trying to assign a pointer type data into a variable, hence there is a data type mismatch warning


```C
unsigned long int address = (unsigned long int)&variable;
```
now this is a number of type unsigned long int, not a pointer

```C


#include<stdio.h>


 

int main(){
    char a = 'a';
    char b = 'b';


    // unsigned long int addressOfA = (unsigned long int)&a;

    // printf("the address of a is %p\n", &a);
 
    /*
       // unsigned long int addressOfA = &a;

    // printf("the address of a is %p\n", &a);
    example.c:11:36: warning: initialization makes integer from pointer without a cast [-Wint-conversion]
     unsigned long int addressOfA = &a;
 

    */

   /*
   // unsigned long int addressOfA = (unsigned long int)&a;

    // printf("the address of a is %p\n", &a);
    example.c:23:20: error: conflicting types for 'addressOfA'
      unsigned  int addressOfA = (unsigned  int)&b;
                    ^~~~~~~~~~
example.c:12:23: note: previous definition of 'addressOfA' was here
     unsigned long int addressOfA = (unsigned long int)&a;
                       ^~~~~~~~~~


   */

     unsigned  int addressOfA = (unsigned  int)&b;
     printf("the address of b is %p\n", &b);

}


 
```

when assumed that the size of long in compiler as 8 bytes which was valid for gdb compiler which uses gcc, but in mingw compielr running on windows, the long size is 4 bytes



## storage classes 

the storage class in C decides: 1 scope of a variable 2 visibility of a variable or function 3 lifetime of a variable. scope, visiility and lifetime are features of a variable. these features can be modified by using storage class specifiers 

regular variables:

```C

#include<stdio.h>

void increment();
 
// you could do a global and make the trick
// int variableName = 0;
int main(){
    increment();
    increment();
    increment();
}


void increment(){
    //remove int when you do global 
    int variableName = 0;
 
    variableName += 1;

    printf("the function executed %d times\n", variableName);

}





 
```

the problem is now you make this variable public, this variable can be modified by any function in the program. we want a global variable taht is private to a function. we want a private variable that does not lose its existence even if the execution control goes out o the scope of that function 


there are two widely used storage class specificers in C 
1. static 

A static variable inside a function keeps its value between invocations.
A static global variable or a function is "seen" only in the file it's declared in

```C
static type variable;

```
Static defined local variables do not lose their value between function calls. In other words they are global variables, but scoped to the local function they are defined in.
Static global variables are not visible outside of the C file they are defined in.
Static functions are not visible outside of the C file they are defined in.

```C
#include<stdio.h>

void increment();
 
// you could do a global and make the trick
// int variableName = 0;
int main(){
    increment();
    increment();
    increment();
}

// this is imposing privacy to your global variables 
void increment(){
    //remove int when you do global 
    static int variableName = 0;
 
    variableName += 1;

    printf("the function executed %d times\n", variableName);

}



```

2. extern

extern is a keyword in C programming language which is used to declare a global variable that is a variable without any memory assigned to it. It is used to declare variables and functions in header files. Extern can be used access variables across C files.

 
 ```C

extern <data_type> <variable_name>;
// or
extern <return_type> <function_name>(<parameter_list>);
 ```


 ```C
// example1.c
#include<stdio.h>

void function_not_in_main_but_another_file();
int variable;

int main(){
    variable = 50;
    printf("the value of the variable is %d\n",variable);

    function_not_in_main_but_another_file();

    printf("the value of the variable is %d\n",variable);


}
// example2.c

extern int variable;

extern void function_not_in_main_but_another_file(){
    variable = 300;
}

//gcc example1.c example2.c
/*
the value of the variable is 50
the value of the variable is 300

*/


 ```

External variables can be declared number of times but defined only once.

“extern” keyword is used to extend the visibility of function or variable.

By default the functions are visible throughout the program, there is no need to declare or define extern functions. It just increase the redundancy.

Variables with “extern” keyword are only declared not defined.

Initialization of extern variable is considered as the definition of the extern variable






Hence, the overall and good coding strategies are:

The static storage class is used to declare an identifier that is a local variable either to a function or a file and that exists and retains its value after control passes from where it was declared. This storage class has a duration that is permanent. A variable declared of this class retains its value from one call of the function to the next. The scope is local. A variable is known only by the function it is declared within or if declared globally in a file, it is known or seen only by the functions within that file. This storage class guarantees that declaration of the variable also initializes the variable to zero or all bits off.

```C
#include<stdio.h>
 
void increment();
void increment2();

int main(){
   static int variable = 50; // this is useless 

    increment();
    increment();
    increment2();
    increment2();
    printf("the value of the variable is %d\n",variable);

     
/*
>a.exe
the value of the variable is 101
the value of the variable is 102
the value of the variable is 101
the value of the variable is 102
the value of the variable is 50


*/
    


}

void increment(){
    static int variable = 100;

    variable ++;
    printf("the value of the variable is %d\n",variable);

}

void increment2(){
       static int variable = 100;

    variable ++;
    printf("the value of the variable is %d\n",variable);

}

```



The extern storage class is used to declare a global variable that will be known to the functions in a file and capable of being known to all functions in a program. This storage class has a duration that is permanent. Any variable of this class retains its value until changed by another assignment. The scope is global. A variable can be known or seen by all functions within a program.

```C
// example1.c
#include<stdio.h>


static int variable;

/*
void function_inside_the_file(int variable);
C:\Users\Eddie\Desktop\microcontroller-embedded-c-programming>gcc example1.c example2.c
example1.c: In function 'main':
example1.c:11:5: warning: implicit declaration of function 'function_not_in_main_but_another_file' [-Wimplicit-function-declaration]
     function_not_in_main_but_another_file();
     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

*/

int main(){
    variable = 50;
    printf("the value of the variable is %d\n",variable);

    function_not_in_main_but_another_file();

    printf("the value of the variable is %d\n",variable);
    return 0;


}


void function_inside_the_file(int variable){
    printf("the variable is = %d\n", variable);
}
/*
static void function_inside_the_file(int variable){
    printf("the variable is = %d\n", variable);
}
you cannot use static here because it is only visible to this file
*/


//example2.c

extern void  function_inside_the_file(int variable);
// extern is assumed here, so you do not need to use it 

 void function_not_in_main_but_another_file(){
   
     function_inside_the_file(300);
}
```
'extern' storage class specifier is used to access the global variable, which is defined outside the scope of a file 
'extern' storage class specifier can also be used during the function call, when the function is defined outside the scope of the file 
the keyword extern is relevant only when your project consists of multiple files, and you need to access a variable defined in one file from another file.  'extern' keyword is used to extend the visibility of a function or variable 



All variables and functions in header files should be extern
Separate header files should be used for variables and functions
Use a C code file to declare the variables and functions and use this in end user code
Extern must be used instead of using global variables



	
	
	
	
	
	
	






