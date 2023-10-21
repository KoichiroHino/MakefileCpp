#include <stdio.h>
#include "hoge.h"
#include "fuga.h"

int main(){
  printf( "HOGE = %d\n", hoge() );
  printf( "FUGA = %s\n", fuga() );

  return 0;
}
