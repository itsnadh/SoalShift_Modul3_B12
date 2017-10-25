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
void* show (void *arg){
    int a,b;
    pthread_t id= pthread_self();
    for (a=1 ; a<=; a++){
        if(pthread_equal(id,tid[i])){
            while(status != a-1);
            {
 
            }
                faktorial(i);
            break;
        }
    }
    status =i;

int main()
{
    int i,j,n;
while(1){
    scanf ("%d%c", &i,&j);
    while("%c"=='\n'){
break;
	}
}

    for ( i=1; i<=j; i++){
        pthread_create (&tid[i], NULL, &show, NULL);
    }
 
    for (i=1; i<=j; i++){
        pthread_join (tid[i],NULL); 
    }
 
    printf("\n");
    return 0;
}        
*/
