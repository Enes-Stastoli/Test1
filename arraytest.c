#include <stdio.h>

int main(){
  int array[]={1,2,3,4,5};
  puts("Program ne C per te printuar elementet e nje vargu.\n");

  for(int i=0; i<4;i++){
      printf("Elementet ne varg jane: %d\n", array[i]);
  }

  return 0;
}
