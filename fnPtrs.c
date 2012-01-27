#include <stdio.h>

void func(int);

int main(){
      void (*fp)(int);
      fp = func;
      (*fp)(1);
      fp(2);
      return 0;
}

void func(int arg){
      printf("%d\n", arg);
}
