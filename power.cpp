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

void S(int &s)

{

    s += 1;
}

void Zeros(int &n)

{
    n = 0;
}

void Transfor(int &n, int &m)
{
    swap(n, m);
}

int main()
{
    int m, n;
    cin >> n >> m;
    system("clear");
    cout << n << " Be tavan " << m << " Mishe : " << Power(n, m) << endl;

    // cout << sum(n, m) << endl;
    //cout << "Zarb " << m << " * " << n << " mishe :  " << multi(m, n) << endl;
}
