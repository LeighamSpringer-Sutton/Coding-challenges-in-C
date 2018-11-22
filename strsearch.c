/******************************************************************************

   Finds a string and returns the index where is starts.         

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    int strSearch(char *haystack,char *needle);
    char *haystack = "I'm doing great in ipc144";
    char *needle = "great";
    int answer = strSearch(haystack,needle);
    printf("%d", answer);
}

int strSearch(char *haystack,char *needle)
{
    int haylen = strlen(haystack);
    int needlelen = strlen(needle);
    int index = 0;
    int needleindex = 0;
    int counter = 0;
    int stringfound = -1;
    for (int i =0; i <haylen; i++){
        if (needle[index]==haystack[i]){
            /*printf("\n%c is the needle %c is the haystack, counter amount : %d len is %d",needle[index],haystack[i],counter,needlelen);*/
            counter++;
            index++; 
            if ((counter == needlelen) && (haystack[i+1] ==' '|| haystack[i+1]=='\0')){
                stringfound = 1;
                /*printf("\nstring found");*/
                needleindex = (i+1)-needlelen;
                /*printf("string found at %d",needleindex);*/
                break;
                
            }
        }
        else{
            counter = 0;
            index = 0;
        }
    }
    if (stringfound!=-1){
        return needleindex;
    }
    else{
        return stringfound;
    }
    
}