// #include<stdio.h>
// //declaration
// void printHello();
// void printGoodbye();

// int main()
// {
// printHello();
// printGoodbye();
// return 0;
// }

// void printHello(){

//     printf("hello!\n");
// }

//void printGoodbye(){
  //  printf("goodbye\n");
//}

#include<stdio.h>
void printNamaste();
void printBanjour();


int main (){
printf("enter i for indian & f for french :");
char ch;
scanf("%c",&ch);

if(ch == 'i')
{
namaste();
}else
{
    banjour();


    return 0;
}
}
void printNamaste(){
    printf("namaste");
}
void printBanjour(){

printf("banjour");
}




