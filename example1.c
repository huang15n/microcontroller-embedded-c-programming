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


static void function_inside_the_file(int variable){
    printf("the variable is = %d\n", variable);
}