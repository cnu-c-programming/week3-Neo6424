#include <stdio.h>

int average(int count, ...){
  va_list ap;
  va_start(ap, count);
  int result = 0;
  for (int i =0; i<count; i++){
    result += va_arg(ap, int);
  }
  result = result/count;
  va_end(ap);
  
  return result;
}

int main() {
    printf("%d\n", average(3, 10, 20, 30));
    printf("%d\n", average(5, 10, 20, 30, 40, 50));

    return 0;
}
