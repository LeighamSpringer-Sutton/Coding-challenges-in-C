
//
//
//  Notifies user whether two words are anagrams.
//
//
//
//

#include <stdio.h>

int main()
{
    int strsort(char array1[],char arraycmp[],int len);
    int strequal(char array[],char array2[]);
    void copystr(char array1[],char array2[]);
    char word1[25],word1cp[25],word2[25], word2cp[25];
    void printanswer(int anagram,char word1cp[],char word2cp[]);
    int lenstr(char array[]),anagram,len;
    
    printf("Please enter first word:");
    scanf("%s",&word1);
    printf("Please enter second word:");
    scanf("%s",&word2);
    
    copystr(word1,word1cp);
    copystr(word2,word2cp);
    len = lenstr(word1);
    anagram = strsort(word1,word2,len);
    printanswer(anagram,word1cp,word2cp);
    
    
    
}
int strsort(char array1[],char arraycmp[],int len)
{
    int replace =' ';
    char array2[7];
    char arraycmp2[7];
    int answer;
    int strequal(char array[],char array2[]);
    
    char max =' ';
    for (int i=0; array1[i]!='\0';i++){
        char max = ' ';
        for (int j=0;array1[j]!='\0';j++){
            if (array1[j]>=max){
                max=array1[j];
                
                replace=j;
            }
        }
        array1[replace]=' ';
        array2[i]=max;
        
        
    }
    
    for (int i=0; arraycmp[i]!='\0';i++){
        char max = ' ';
        for (int j=0;arraycmp[j]!='\0';j++){
            if (arraycmp[j]>=max){
                max=arraycmp[j];
                
                replace=j;
            }
        }
        arraycmp[replace]=' ';
        arraycmp2[i]=max;
        
    }
    answer = strequal(array2,arraycmp2);
    
    return answer==len;
    
    
}

int lenstr(char array[])
{
    int len=0,i=0;
    while (array[i]){
        len++;
        i++;
    }
    return len;
}

int strequal(char array[],char array2[])
{
    int counter =0;
    for (int i =0;array[i] !='\0';i++)
    {
        if (array[i] ==array2[i])
        {
            counter++;
        }
    }
    
    return  counter;
}
void copystr(char array1[],char array2[])
{
    int lastindex = 0;
    for (int i =0;array1[i]!='\0';i++){
        array2[i] = array1[i];
        lastindex= i;
    }
    array2[lastindex+1]= '\0';
}
void printanswer(int anagram,char word1cp[],char word2cp[])
{
    if (anagram){
        printf("Yes! %s and %s are anagrams.",word1cp,word2cp);
    }
    else{
        printf("Sorry! %s and %s are not anagrams.",word1cp,word2cp);
    }
}

