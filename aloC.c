//#include <stdio.h>
//double pow(const double, const double);
int printf(const char*, ...);
int main(){
 int A=3, B=2, S;
 S = A + B;
 printf("%d+%d=%d\n",A,B,S);
 S = B + A;
 printf("%d+%d=%d\n",B,A,S);
 return 0;
};
