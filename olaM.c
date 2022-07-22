#include <stdio.h>
//#include <minhasFuncoes.h>
int saudar(void);
int termoSeqQ(int); 
int main (void)
{
  int C=saudar();
  int T;
  int j=1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  T= termoSeqQ(j); printf("%i, ", T); j=j+1;
  printf("\n");
  return 11;
}
#define mensagem "OLA sequencia quadratica!\n"
int saudar(void){
 // int r = printf(mensagem);
  return printf(mensagem); 
  //printf("retorno de printf = %d\n", r);
}

int termoSeqQ(int i){ 
	return i*i;
}
