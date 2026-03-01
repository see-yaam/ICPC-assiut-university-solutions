#include<stdio.h>
int main() {
   char str[10000001];
   scanf("%s",&str);

   int freq[26]={0};

   for(int i=0;str[i]!='\0';i++){
      // int index=str[i]-'a';
    freq[str[i]-'a']++;
}

//    for(int i=0;str[i]!='\0';i++){
//         freq[str[i]]++;
//    }

   for(int i=0;i<26;i++){
    if (freq[i]>0){
            char letter='a'+i;
            printf("%c : %d\n",letter,freq[i]);
    }

   }
    return 0;
}