#include "floatingpoint.h"

int main()
{
  int a; 
  float b;
  cin >> a >> b;
  cout << setprecision(10) << fixed;
  cout << FPUtil::mul(a,b) << ' ' << a * b  << endl;
  return 0;
}
