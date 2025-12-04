#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int turn = 0;

struct schoolchild {
        int s_id;
        char name[20];
        int n_class;
};
struct schoolchild schoolchild[2] = { {1, "Fedorenko", 4} };

void main(void) {
   pthread_t T1_thread, T2_thread;
   void *T1(), *T2();
   pthread_create(&T1_thread, NULL, T1, NULL);
   pthread_create(&T2_thread, NULL, T2, NULL);
   pthread_join(T1_thread, NULL);
   pthread_join(T2_thread, NULL);
}

void *T1() {
       for (int i = 1; i <= 3; i++) {
        while (turn != 0);
        sleep(2);
        printf("T1: Critical Region\n");
	printf("T1: Read[name] = %s\n", schoolchild[0].name);
        sleep(1);
	strcpy(schoolchild[0].name, "Tkachenko");
	printf("T1: Write[name] = %s\n", schoolchild[0].name);
        sleep(1);
        turn = 1;
        printf("T1: Noncritical Region\n");
        sleep(2);
    }
}

void *T2() {
    for (int i = 1; i <= 3; i++) {
        sleep(1);
        while (turn == 0);
        printf("T2: Critical Region\n");
        sleep(3);
	printf("T2: Read[name] = %s\n", schoolchild[0].name);
        sleep(1);
	strcpy(schoolchild[0].name, "Sidorov");
	printf("T2: Write[name] = %s\n", schoolchild[0].name);
        sleep(1);
        turn = 0;
        printf("T2: Noncritical Region\n");
        sleep(1);
    }
}
