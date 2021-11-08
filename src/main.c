#include <stdio.h>
#include <foo.h>

int main(int argc, char *argv[])
{
  if (argc > 1){
    printf("Foo generated the number: %d\n", foo(atoi(argv[1]))); 
  }
  return 0;
}
