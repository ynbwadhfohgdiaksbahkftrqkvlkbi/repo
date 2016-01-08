/******************************************************************
***                                                             ***
***   Author     : GM Arif Shuvo                                ***
***   University : CSE, Jahangirnagar University                ***
***   Handle     : aarif_shuvo (codeforces/topcoder/codechef)   ***
***                                                             ***
******************************************************************/

 
 Problem: www.spoj.com/problems/TOANDFRO/
 
 
#include<stdio.h>
#include<string.h>
 
int main()
{
    int t;
    scanf("%d",&t);
     
    while(t)
    {
        char arr[300];
        scanf("%s",arr);
         
        int len=strlen(arr)/t;
         
        char ans[len][t];
        int i,j,k=0;
         
        for(i=0;i<len;i++)
        {
            if(i%2)
            {
                for(j=t-1;j>=0;j--)
                   ans[i][j]=arr[k++];
            }
            else{
                     
                for(j=0;j<t;j++)
                    ans[i][j]=arr[k++];
            }
        }
         
        for(i=0;i<t;i++)
        {
            for(j=0;j<len;j++)
                printf("%c",ans[j][i]);
        }
         
        printf("\n");
         
        scanf("%d",&t);
    }
    return 0;
}
 
 
 
 
//Another Approach........
 
 
 
 
#include <stdio.h>
#include <string.h>
 
int main()
{
    int n,len,x,k,i,j,p,y,t;
    char str[1000000];
 
    while(scanf("%d", &n)==1 && n!=0){
        getchar();
        gets(str);
        len=strlen(str);
        y=len/n;
 
        if(y%2==0){
            x=0;
            p=2*n-1;
 
            for(k=0; k<n; k++){
                for(i=x,j=p; i<len,j<len; i+=(2*n),j+=(2*n))
                {
                    printf("%c", str[i]);
                    printf("%c", str[j]);
                }
                x++;
                p--;
            }
            printf("\n");
 
        }else
        {
            x=0;
            p=2*n-1;
            t=len-n;
 
            for(k=0; k<n; k++){
                for(i=x,j=p; i<len,j<len; i+=(2*n),j+=(2*n))
                 {
                    printf("%c", str[i]);
                    printf("%c", str[j]);
                 }
                printf("%c", str[t]);
                t++;
                x++;
                p--;
            }
            printf("\n");
        }
 
    }
 
 
    return 0;
}
