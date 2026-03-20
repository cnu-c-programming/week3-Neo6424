#include <stdio.h>

int power(int base, int exp) {
  int result =0;
    if(exp == 0){
      return result;
    } else if(exp == 1){
      result = result*base;
      return result;
    }else{
      result = result*base;
      exp--;
      power(base, exp);
    }
}

int main() {
    printf("%d\n", power(2, 3));
    printf("%d\n", power(5, 0));
    printf("%d\n", power(3, 4));

    return 0;
}
