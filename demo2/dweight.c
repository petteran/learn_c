//
// Created by petteran on 2022/1/19.
//
#include <stdio.h>

int main(void){
    int height,length,width,volume,weight;

    height=8;
    length=12;
    width=10;
    volume = height * width * length;
    weight = (volume + 165)/166;

    printf("Dimensions : %dx%dx%d\n",length,width,height);
    printf("Volume ( cubic inches ): %d\n", volume);
    printf("Dimensional weight (pound): %d\n",weight);

    return 0;

}
