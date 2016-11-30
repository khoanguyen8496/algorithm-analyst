#ifndef FPUTIL_H_INCLUDED
#define FPUTIL_H_INCLUDED
#include <bits/stdc++.h>

using namespace std;

class FPUtil
{
public:
  static float mul(int a, float b){
    float ret = 0;
    while ( a) {
      int d = a% 10;
      ret += (float)d * b;
      b *= 10;
      a /=10;
    }
    return ret;
  }

};

#endif
