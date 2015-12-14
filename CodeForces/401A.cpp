/*
* GM Arif Shuvo
* CSE, Jahangirnagar University(44)
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <bits/stdc++.h>
using namespace std;
#define LL  long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define prntcs       printf("Case %I64d: ", ++cs);
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define debug_array(a,n) for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debug_matrix(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
template<class T1> void debug(T1 e){cout<<e<<endl;}
template<class T1,class T2> void debug(T1 e1,T2 e2){cout<<e1<<"\t"<<e2<<endl;}
template<class T1,class T2,class T3> void debug(T1 e1,T2 e2,T3 e3){cout<<e1<<"\t"<<e2<<"\t"<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void debug(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<endl;}
template<class T1,class T2,class T3,class T4,class T5> void debug(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<"\t"<<e5<<endl;}

#define MX 12345

int main()
{
    LL n,x,c,s,a[MX];

    while(cin>>n>>x){
        s=0;
        rep(i,1,n){
            cin>>a[i];
            s+=a[i];
        }
        s=abs(s);
        prnt1(s/x+(s%x>0));   //****prnt1(s/x+(s%x>0)); s%x>0?

    }
    return 0;
}

************//////////////////


int main()
{
    LL n,x,c,s,a[MX];

    while(cin>>n>>x){
        s=0;
        rep(i,1,n){
            cin>>a[i];
            s+=a[i];
        }
        if(s>=0){
                c=0;
            while(s>=x){
                c++;
                s-=x;
            }
            if(s!=0)
                c++;
        }else{
              c=0;
            while(s+x<=0){
                c++;
                s+=x;
            }
            if(s!=0)
                c++;
        }
        prnt1(c);
    }
    return 0;
}

/*

3 2
-1 1 2
2 3
-2 -2

*/
