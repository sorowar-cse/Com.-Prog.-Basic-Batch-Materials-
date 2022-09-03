#include<stdio.h>
int main()
{
  int N, T, P;
  scanf("%d%d%d",&N,&T,&P);
  int TM, PM, F= 0;
  for(int i=0;i<N;i++)
  {
    scanf("%d%d",&TM,&PM);
    if(TM<T && PM>P)
    {
      printf("Yes\n");
     F= 1;
     break;
    }
  }

  if(F==0)
  printf("No\n");
  return 0;
}
