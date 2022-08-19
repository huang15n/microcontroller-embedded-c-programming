extern int variable;
/*
another.h:1:12: warning: 'variable' initialized and declared 'extern'
 extern int variable= 500;
            ^~~~~~~~
*/
extern void function_not_in_main_but_another_file();