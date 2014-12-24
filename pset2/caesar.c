#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

string cipher(string,int);

int main(int argc, string argv[]){

    if(argc==2){
        int key = atoi(argv[1]);
        string word;
        string wordEncrypted;
        
        
        
        word = GetString();
        wordEncrypted = cipher(word,key);
        printf("%s\n",wordEncrypted);
    }
    else{

        printf("enter correct value");
        return 1;
    }
}


string cipher(string w,int k){
    
int length = strlen(w);
    
    
    for(int i=0; i<length ;i++){
        
       if(isalpha(w[i])){
       
            if(islower(w[i]))
                w[i] = ((w[i]-'a'+k)%26)+'a';
            else
                w[i] = ((w[i]-'A'+k)%26)+'A';
       }
       
    }
    
return w;
}
