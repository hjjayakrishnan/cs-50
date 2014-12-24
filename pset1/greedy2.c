#include<stdio.h>
#include<cs50.h>
int CalculateCoins(int);

int main(void){

    int noOfCoins,balance;
    
    while(true){
        printf("Enter the balance");
        balance= 100*GetFloat();
        if(balance>0)
        break;
    }
    noOfCoins = CalculateCoins(balance);
    printf("\n coins: %d \n",noOfCoins);
    
    
 }
 
 int CalculateCoins(int a){
 
 int totalCount,count25,count10,count5;
    
    if(a>25){
    
        count25 = a / 25;
        a = a%25;
        
        count10 = a / 10;
        a = a%10;
        
        count5 = a / 5;
        a = a%5;
        
        totalCount = count25+count10+count5+a;
        }
      else if(a>10){
      
        count10 = a / 10;
        a = a%10;
        
        count5 = a / 5;
        a = a%5;
        
        totalCount = count10+count5+a;
        }
        
       else if(a>5){
       
        count5 = a / 5;
        a = a%5;
        
        totalCount = count5+a;
        }
        else
        totalCount = a;
            
        
        
        return totalCount;
     
    
        
    }
