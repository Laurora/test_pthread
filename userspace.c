#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void thread1(void)
{
    int i;
    for(i=0;i<3;i++)
        printf("This is a pthread1.\n");
}
void thread2(void)
{
    int i;
    for(i=0;i<3;i++)
        printf("This is a pthread2.\n");
}
int main(void)
{
    pthread_t t1, t2;
    int i, ret1,ret2;
    pthread_create(&t1,NULL, (void *) thread1,NULL);
    pthread_create(&t2,NULL, (void *) thread2,NULL);
    /*if(ret1!=0||ret2!=0){
        printf ("Create pthread error!\n");
        exit (1);
        }*/
    for(i=0;i<3;i++)
        printf("This is the main process.\n");
    //pthread_join(t1,NULL);
    //pthread_join(t2,NULL);
    return (0);
}