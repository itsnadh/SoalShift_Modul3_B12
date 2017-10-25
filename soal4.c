#include <math.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
 
pthread_t tid[100];
int status;
 
int faktorial (int n){
int i,bil;
int hasil=1;

for(i=1;i<=bil;i++){
	hasil=hasil*i;
}
return hasil;
}

int status =0;

/*int main()
{
    int i,j;
while(1){
    scanf ("%d%c", &i,&j);

    for ( i=1; i<=T; i++){
        pthread_create (&tid[i], NULL, &tampilkan, NULL);
    }
 
    for (i=1; i<=T; i++){
        pthread_join (tid[i],NULL); 
    }
 
    printf("\n");
    return 0;
}        
*/
