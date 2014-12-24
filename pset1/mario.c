#include<stdio.h>
#include<cs50.h>
void displayPyramid(int);

int main(void){

    int maxHeight = 23, minHeight = 0, pyramidSize;
    
    while(true){    

    printf(" Height : ");
    pyramidSize = GetInt();
    if(pyramidSize<=maxHeight && pyramidSize>=minHeight)
    break;
    
    }

    displayPyramid(pyramidSize);

}

void displayPyramid(int a) {

int i,j;

    for( i = 1; i<a+1 ;i++){
        for( j = 0; j<(a+1)-(i+1);j++){
        printf(" ");
        
        }
        while(j<(a+1)){
        printf("#");
        ++j;
        }
        printf("\n");
     }
        
        
        
}
    
   
    




