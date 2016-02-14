#include <stdio.h>
#include <stdlib.h>


/*
*/

void expand(char *s, char *t){

}


int main(){
    char text1[50] = "Hello, \n\tWorld!";
    char text2[51]="";


    escape(text1,&text2);
    printf("original string: %s\n",text1);
    printf("modified string: %s",text2);
    escape(text2,text1);
    printf("convert it back;")
    return 0;
}
