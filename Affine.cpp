#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
if(a==0){
return b;
}
return gcd(b%a,a);
}

int main(){
int i;
int arr[12];
int k=0;
for(i=1;i<26;i++){  // for selecting a
int x1=gcd(i,26);
if(x1==1){
arr[k]=i;
k++;
}
}

unsigned seed=0;
random_shuffle(arr, arr+12); // randomly interchanges
cout<<"10 possible values of a : \n";
for(i=0;i<10;i++){
cout<<arr[i]<<" ";
}
cout<<"\n";
cout<<"value of a selected is : "<<arr[2]<<"\n";
int a=arr[2];
int b;
cout<<"enter value of b : ";
cin>>b;
getchar();
b=b%26;
cout<<"enter plain text to decrypt : ";
string text;
getline(cin,text);
i=0;
string ct="";
while(i<text.length()){
int x1=text[i]-'a';
i++;
x1=(a*x1+b)%26;
ct=ct+char(x1+97);
}
cout<<"ciphertext  : "<<ct<<"\n";
for(i=1;i<1000;i++){     //  multiplicative inverse of a
if(a*i%26==1){
a=i;
break;
}
}



i=0;
string pt="";
while(i<ct.length()){
int x1=ct[i]-'a';
i++;
x1=a*(x1-b);  // use of multiplicative inverse
if(x1>=0){
x1=x1%26;
}
else{
x1=(abs(x1)/26)*26+26+x1;
x1=x1%26;
}
pt=pt+char(x1+97);
}
cout<<"plain text generated after decryption is : "<<pt<<"\n";


return 0;
}
