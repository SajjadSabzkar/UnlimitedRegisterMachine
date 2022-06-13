#include <iostream>
using namespace std;


int Power(int r1, int r2)
{

    int r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r6 += 1;
    r7 = r1;
L1:
    if (r2 == r5)
        goto L4;
L112:
    if (r2 == r6)
        goto L5;
L11:
    if (r1 == r5)
        goto L3;
    if (r7 == r4)
        goto L2;
    r3 += 1;
    r4 += 1;
    goto L11;
L2:
    r5 += 1;
    r4 = 0;
    goto L11;
L3:
    r1 = r3;
    r5 = 0;
    r4 = 0;
    r3 = 0;
    r6 += 1;
    goto L112;
L4:
    r1 = r6;
    goto L5;
L5:
    return r1;
}


int main(){

	int n , m ;
	cin >> n >> m ;
	system("clear");
	cout << "Power "<<n <<" ^ " << m << " is : "<<Power(n,m) <<endl;
}








