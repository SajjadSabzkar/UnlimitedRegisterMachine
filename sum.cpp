#include <iostream>

using namespace std;


int sum(int r1, int r2)
{

    int r3 = 0;
L1:
    if (r1 == r3)
        goto L2;
    r3 += 1;
    r2 += 1;
    goto L1;
L2:
    return r2;
}

int main(){
	int m , n;
	cin>>n>>m;
	system("clear");
	cout<<"sum " << n << " + " << m << " is : "<<  sum(n,m)<<endl;
}









