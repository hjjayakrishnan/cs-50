/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include<stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
  int  beg = 0;
  int  end = n;
  int middle = (beg+end)/2;
   
    while(beg<=end){
    
        if(values[middle] < value)
        {
            beg = middle+1;
            middle = (beg+end)/2;
            
        }
        else if(values[middle] > value)
        {
            
            end = middle-1;
            middle = (beg+end)/2;
            
        }
        else
        {
        
            
            return true;
            break;
        }
    }
    
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
int temp;
    for(int j=0;j<n;j++)
    {

        for(int i=0;i<n;i++)
        {   
            if(values[i+1]<values[i])
            {
                temp = values[i];
                values[i]=values[i+1];
                values[i+1]=temp;
            }
        }
     }   
              
    
}
