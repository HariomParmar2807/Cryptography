#include<bits/stdc++.h>
using namespace std;
int main()
{
      char pt[30],c[27],ct[30];
      int i,j,index,n;
     cin>>n;//plaintext size
     char ch;
      printf("\n\nImplement Mono Alphabetic Cipher Encryption-Decryption.");
      printf("\nEnter Plain Text : ");
      for(int i=0;i<n;i++){
      scanf("%c",&pt[i]);}

      printf("\nEnter Key From a to z : \n");
      for(i=0;i<26;i++)
      {
            printf("%c-",i+97);
            c[i]=pt[i]-97;
            printf("%c , ",c[i]);
      }

      for(i=0;i<strlen(pt);i++)
      {
            index=pt[i]-97;
            ct[i]=c[index];
      }

      printf("\n\nCipher Text is : ");
      for(i=0;i<strlen(pt);i++)
      {
            printf("%c",ct[i]);
      }
      return 0;
}