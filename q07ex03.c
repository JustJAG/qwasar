#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char* rcapitalize(char* a) {
  int i,j;
  for(i=0; i<strlen(a); i++) {
    a[i] = tolower(a[i]);
  }
  for(i=0;i<strlen(a);i++){
      if (a[i]/1 == 32){
        //   for(j=i-1;j>=0;j--){
        //       if((a[j]/1 -97)/25==0){
        //           a[j]=toupper(a[j]);
        //           break;
        //       }}
        a[i-1]= toupper(a[i-1]);
          
      }
  }
  a[strlen(a)-1]=toupper(a[strlen(a)-1]);
  return a;
}
