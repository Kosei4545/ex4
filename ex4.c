#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main(){
  char Hairetu[5][6],Dainyu[6];
  int i,number,headscounter=0,tailscounter=0;

  srand((unsigned int)time(NULL));

  for(i=0;i<5;i++){
    number=rand()%10+1;
    if(number%2==0){
      strcpy(Hairetu[i],"Heads");
      number=0;
    }
    else{ strcpy(Hairetu[i],"Tails");
      number=0;
    }
  }

  printf("Tossing a coin\n");
  for(i=0;i<3;i++){
    strcpy(Dainyu,Hairetu[i]);
    printf("Round %d: %s\n",i+1,Dainyu);
    if(strcmp(Dainyu,"Heads")==0){
      headscounter++;
    }
    else{ tailscounter++;
    }
  }
  printf("Heads:%d, Tails:%d\n",headscounter,tailscounter);
return 0;
}
