#include "bruh.h"
 void main(){
	//*(int*)0xb8000 = 0x968; //0xb8000 is the starting memory address  for
				//writing to the screen
			          //9 sets the color to blue
	//bruh();		 //68 is the hexadecimal ascii value for h
	print_str(0xf0a,"Welcome to pointer* hell!!!!");

}
