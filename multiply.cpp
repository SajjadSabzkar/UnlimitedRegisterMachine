#include <iostream>

using namespace std;


int multiply(int m, int n)
{
    // Help Program

    //r1 = m
    //r2 = n
    //r3 = o
    //r4 = p
    //r5 = q

    int o = 0, p = 0, q = 0;

L1:
    if (m == q)
        goto L3;

    if (n == p)
        goto L2;
    o += 1;
    p += 1;
    //cout<<"o is "<<o<<"p is "<<p<<endl;
    goto L1;
L2:
    q += 1;
    p = 0;
    goto L1;
L3:
    return o;
}


int main(){

	int n , m ;
	cin>>n>>m;
	system("clear");
	cout<<"multiply "<< n << " * " << m << " is : " << multiply(n,m) <<endl;
}








