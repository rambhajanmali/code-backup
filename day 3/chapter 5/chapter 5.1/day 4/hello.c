#include<stdio.h>
#include<math.h>

float squareArea(float side);
float curcleArea(float radius);
float rectangleArea(float a, float b);

int main(){
float a=5.0;
float b=6.0;

printf("area is %f", rectangleArea(a ,b));

    return 0;
    }
    float squareArea(float side){
        return side*side;
    }
    float curcleArea(float radius){
        return 3.14*radius*radius;
    }
    float rectangleArea(float a, float b){
        return a*b;
    }