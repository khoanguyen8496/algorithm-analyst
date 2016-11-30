#include <bits/stdc++.h>

using namespace std;

int fibo(int n, int & a, int & c)
{
        if (++c && n <= 1) {
                a++;        
                return 1;
        } else {
                a++;
                return fibo(n-1, a, c) + fibo(n-2, a, c);
        }
}
int main()
{
        freopen("out", "w",stdout);
        int a, c, n;
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i) {
                a = c = 0; 
                printf("%d %d ", i, fibo(i, a, c));
                printf("%d %d\n", a, c);
        }
        return 0;
}
