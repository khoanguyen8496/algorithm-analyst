#include <bits/stdc++.h>

using namespace std;

int fibo(int n, int &a, int &c)
{
        int f1, f2, f;
        f1 = f2 = f = 1;
        a+=3;
        if (++c && n <= 1) {
                ++a;
                return 1;
        }
        else {
                ++a;
                for (int i = 2; ++c && i <= n; ++i, ++a) {
                        f = f1 + f2;
                        f1 = f2;
                        f2 = f;
                        a+=3;
                }
                ++a;
                return f;
        }
}
int main()
{
        freopen("out2", "w", stdout);
        int n, a, c;
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i){
                a = c = 0;
                printf("%d %d ", i, fibo(i, a, c));
                printf("%d %d\n", a, c);
        }
        return 0;
}
