
extern void  function_inside_the_file(int variable);
// extern is assumed here, so you do not need to use it 

 void function_not_in_main_but_another_file(){
   
     function_inside_the_file(300);
}