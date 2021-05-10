#include <iostream>
#include <math.h>
using namespace std;

int main() {
int x,y;
  cin >> x;
  if (x < 1) {
    if (x > 0) {
      if (x < 1) {
        y = 1 / x;
      }
      else {
        y = x * x;
      }
    }
    else {
      y=tan(x);
    }
  }
  else {
    y=0;
  }
}
