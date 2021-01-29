#include"proc.h"

void proc()
{
  
  char arr[num];
  memset(arr,'\0',sizeof(arr));
  const char * lock="|/-\\";
  int i=0;
  while(i<100)
  {
      arr[i++]='#';
      printf("[%-100s][%d%%][%c]\r",arr,i,lock[i%4]);
      fflush(stdout);
      usleep(30000);
  }
  printf("\n");
}
