
#include <stdio.h>

int main(){

// int a,b;
// printf("enter a");
// scanf ("%d",&a);

// printf ("enter b");
// scanf ("%d",&b);

// printf ("sum %d",a+b);


// int number;
// printf("enter number:");
// scanf("%d",&number);

// if(number % 2 ==0){
//     printf("even");
// }
// else{
//     printf("odd");
// }

// int age;
// printf("enter age:");
// scanf("%d",&age);

// if (age<13){
//     printf("child");
// }
// else if(age>13 && age<18){
//     printf("teenager");
// }
// else{
//     printf("adult");
//}

// int day;
// printf("enter day(1-7)");
// scanf("%d",&day);

// //1=monday,2=tuesday 
// switch(day){
//     case 1:printf("monday\n");
// break;

// case 2:printf("tuesday\n");
// break;
// case 3:printf("wednesday\n");
// break;
// case 4:printf("thrusday\n");
// break;
// case 5:printf("friday\n");
// break;
// case 6:printf("saturday\n");
// break;
// case 7:printf("sunday\n");
// break;
// default: printf("not a valid day");

// }
int mark;
printf("enter mark");
scanf("%d",&mark);
//number>30?printf("pass"):printf("fail");

// if(number>0){
//     printf("positive");

// if(number % 2 == 0 ){
//     printf("even");
//     }else{
//         printf("odd");
//     }
// }
// else{
//     printf("negative");
// }
if(30<=mark && mark<70){
    printf("grade b");
}
else if(70<=mark && mark<90){
    printf("grade a");
}
else if(90<mark && mark<=100){
    printf("grade a+");
}
else{
    printf("not a valid number");
}
return 0;
}




