# microcontroller-embedded-c-programming




### Program 
a program is a series of instruction a computer or a microcontroller to perform a particular tasks 
a computer program include more than just instructions. it also contains data d various memory addresses on which the instruction work to perform a specific task 


### IDE
IDE is a software that contains all essential tool to compile , link, and debug your code 
you may have to integrate compiler and debugger tools to the IDE manually 
we will be using Eclipse based STM32Cube IDE which is developed by ST Microelectronics to write apps on STM32 arm based microntroller 
STM32CubeIDE is an eclipse IDE with STM32 related  csutomziation 


pinout, clock, IP and middle configuration
base on Eclipse with support of addons, GNU C/C++ for ARM toolchain and GDB debugger
CPU core, IP register, and memory views 

install the software in the C drive, and install drivers 


### Installation of GNU compiler collections GCC for host 
note that STM32CubeIDE is an integerate development software to develop, compile, debug embedded and microcontrolelrs 
its installation procedure also installs compiler for ARM Corte Mx processors 
using the same IDE, we also write and compile C program 
we need to also install the compiler for host machine that does not come with the STM32CubeIDE installation 

windows: install MinGW minimlist GNU for windows
LINUX/MAC: install gcc


### onlinegdb.com
one quick tool to use 


### Host and Taget 
host means the project will run on our host machine 
create workspace -> name as it xxx -> c/c++ project -> C managed build -> MinGW GCC -> add new , source file -> main.c

In STM32CubeIDE: Where to set path for "make"?
Error: Program "make" not found in PATH

Double check that your anti-virus didn't remove the make.exe file located by default at:

C:\ST\STM32CubeIDE_1.0.0\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.make.win32_1.0.0.201904231117\tools\bin


Setting the path is done at:

Project Properties -> C/C++ build -> environment -> PATH


Maybe the Cygwin DLL isn't being found by processes started by Eclipse.
Are you sure you started Eclipse with Cygwin?

You could try changing the compile command to env
and compare the output with an env issued in at the command line.

### project for the target 
new STM32 -> STM32 project -> select your target

use board selector 
if you have a board that is not recognized by STM then use MCU selector 

datasheet and user manaul 
new project -> C -> Executable -> Empty
do not delete any files in this project


### C standardization 

C programming language was initially developed by K&R  without serious standardization,  which lead to ambiguities among compliers 
first official standard is C89 OR c90 standard, language undewent few more changes and newly updated ISO9899 - C99, C11 supercedes C99, which is compiler GCC extensions gnu11
note if you have written a piece of code using C90 standard, will compile withut any isssues in -std=C90


### Hello World


```C
#include<stdio.h>
int main(){
    printf("Hello World!");
}


```
when your compiler sees ` #include<stdio.h>`, it includes  all the content inside stdio.h a.k.a prototypes / function signature of functions 


main.c -> main.i -> assembly

main.s -> compiler -> main.o (relocatable object file)
         assembler stage, 
        assembly level mnemonics are converted into opcodes, machine codes for instructions 




### escape sequence 
\n    \ escape character, n code for new line 

```C
#include<stdio.h>
int main(){
    printf("Hello World!");
     printf("Hello World! \n");
}


```

\r move the cursor hrizontally to the beginning of the current line 


| Name  | decimal | octal | hex  | C-escape | Ctrl-Key | Description                    |
| ----- | ------- | ----- | ---- | -------- | -------- | ------------------------------ |
| `BEL` | 7       | 007   | 0x07 | `\a`     | `^G`     | Terminal bell                  |
| `BS`  | 8       | 010   | 0x08 | `\b`     | `^H`     | Backspace                      |
| `HT`  | 9       | 011   | 0x09 | `\t`     | `^I`     | Horizontal TAB                 |
| `LF`  | 10      | 012   | 0x0A | `\n`     | `^J`     | Linefeed (newline)             |
| `VT`  | 11      | 013   | 0x0B | `\v`     | `^K`     | Vertical TAB                   |
| `FF`  | 12      | 014   | 0x0C | `\f`     | `^L`     | Formfeed (also: New page `NP`) |
| `CR`  | 13      | 015   | 0x0D | `\r`     | `^M`     | Carriage return                |
| `ESC` | 27      | 033   | 0x1B | `\e`[*](#escape) | `^[` | Escape character           |
| `DEL` | 127     | 177   | 0x7F | `<none>` | `<none>` | Delete character               |






