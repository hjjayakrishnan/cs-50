#include<stdio.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>

string cipher(string w, string k);

int main(int argc, string argv[]){

    if(argc== 2){
        string key = argv[1], wordEncrypted;
        
        for(int i=0,n=strlen(key); i< n;i++){
        
            if(isalpha(key[i]))
               key[i]=tolower(key[i]);
            else{
                printf("Keyword must be only A-Z and a-z");
                exit(1);
            }
         }
        
            
        string word = GetString();
        wordEncrypted = cipher(word,key);
        printf("%s\n",wordEncrypted);
     }
     else{
        printf("Usage: vigenere <keyword>");
        return 1;
     }
}


string cipher(string w, string k){
    
    int lengthw = strlen(w);
    int lengthk = strlen(k);
    int j = 0;
    
    for(int i=0; i<lengthw ;i++){
        
       if(isalpha(w[i])){
       
            if(islower(w[i])){                   
                       
               w[i] = ((w[i]-'a'+(k[j]-'a'))%26)+'a';
               j++;
           }
            else{
                w[i] = ((w[i]-'A'+(k[j]-'a'))%26)+'A';
                j++;
            }
       }
       if(j==lengthk)
       j=0;
       
    }
    return w;
}
