/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000];
    long long i,len,sum,k,prime;

    while(gets(str)){
        sum=0;
        len=strlen(str);
        for(i=0; i<len; i++){
            if(str[i]=='a')
                sum+=1;
            else if(str[i]=='b')
                sum+=2;
            else if(str[i]=='c')
                sum+=3;
            else if(str[i]=='d')
                sum+=4;
            else if(str[i]=='e')
                sum+=5;
            else if(str[i]=='f')
                sum+=6;
            else if(str[i]=='g')
                sum+=7;
            else if(str[i]=='h')
                sum+=8;
            else if(str[i]=='i')
                sum+=9;
            else if(str[i]=='j')
                sum+=10;
            else if(str[i]=='k')
                sum+=11;
            else if(str[i]=='l')
                sum+=12;
            else if(str[i]=='m')
                sum+=13;
            else if(str[i]=='n')
                sum+=14;
            else if(str[i]=='o')
                sum+=15;
            else if(str[i]=='p')
                sum+=16;
            else if(str[i]=='q')
                sum+=17;
            else if(str[i]=='r')
                sum+=18;
            else if(str[i]=='s')
                sum+=19;
            else if(str[i]=='t')
                sum+=20;
            else if(str[i]=='u')
                sum+=21;
            else if(str[i]=='v')
                sum+=22;
            else if(str[i]=='w')
                sum+=23;
            else if(str[i]=='x')
                sum+=24;
            else if(str[i]=='y')
                sum+=25;
            else if(str[i]=='z')
                sum+=26;
            else if(str[i]=='A')
                sum+=27;
            else if(str[i]=='B')
                sum+=28;
            else if(str[i]=='C')
                sum+=29;
            else if(str[i]=='D')
                sum+=30;
            else if(str[i]=='E')
                sum+=31;
            else if(str[i]=='F')
                sum+=32;
            else if(str[i]=='G')
                sum+=33;
            else if(str[i]=='H')
                sum+=34;
            else if(str[i]=='I')
                sum+=35;
            else if(str[i]=='J')
                sum+=36;
            else if(str[i]=='K')
                sum+=37;
            else if(str[i]=='L')
                sum+=38;
            else if(str[i]=='M')
                sum+=39;
            else if(str[i]=='N')
                sum+=40;
            else if(str[i]=='O')
                sum+=41;
            else if(str[i]=='P')
                sum+=42;
            else if(str[i]=='Q')
                sum+=43;
            else if(str[i]=='R')
                sum+=44;
            else if(str[i]=='S')
                sum+=45;
            else if(str[i]=='T')
                sum+=46;
            else if(str[i]=='U')
                sum+=47;
            else if(str[i]=='V')
                sum+=48;
            else if(str[i]=='W')
                sum+=49;
            else if(str[i]=='X')
                sum+=50;
            else if(str[i]=='Y')
                sum+=51;
            else if(str[i]=='Z')
                sum+=52;
        }

            prime=1;

                for(k=2; k<=sum/2; k++){
                    if(sum%k==0){
                        prime=0;
                        break;
                    }
                }


        if(prime==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}







//Alternate Efficient Solution









#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int i,l,sum,n,p,j;
    char c[100];
    while(gets(c))
        {
        sum=0;
        l=strlen(c);
        
        for(i=0;i<l;i++){
                
            if(c[i]>='a'&&c[i]<='z'){
                n=c[i]-96;
                sum=sum+n;
            }
            else{
                n=c[i]-38;
                sum=sum+n;
            }
        }

            p=1;
    
            for(j=2; j<=sqrt(sum); j++)
            {
                if(sum%j==0)
                {
                    p=0;
                    break;
                }
            }
    
            if(p==1 || sum==1)
                printf("It is a prime word.\n");

            else if(p==0)
                printf("It is not a prime word.\n");
    }
    return 0;
}