#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>

int flag[2];
int turn;

struct schoolchild {
        int s_id;
        char name[20];
        int n_class;
};
struct schoolchild schoolchild[2] = { {1, "Fedorenko", 4} };

int main(void) {
    pthread_t T1_thread, T2_thread;
    void *T1(), *T2();
    pthread_create(&T1_thread, NULL, T1, NULL);
    pthread_create(&T2_thread, NULL, T2, NULL);
    pthread_join(T1_thread, NULL);
    pthread_join(T2_thread, NULL);
    return 0;
}

void *T1() {
      for (int i = 1; i <= 3; i++) {
        flag[0] = 1;
        turn = 1;
        while (flag[1] == 1 && turn == 1);
        sleep(2);
        printf("T1: Critical Region.\n");
	printf("T1: Read[name] = %s\n", schoolchild[0].name);
	strcpy(schoolchild[0].name, "Tkachenko");
	printf("T1: Write[name] = %s\n", schoolchild[0].name);
        flag[0] = 0;
        printf("T1: Noncritical Region.\n");
    }
}

void *T2() {
      for (int i = 1; i <= 3; i++) {
        sleep(1);
        flag[1] = 1;
        turn = 0;
        while (flag[0] == 1 && turn == 0);
        sleep(3);
        printf("T2: Critical Region.\n");
	printf("T2: Read[name] = %s\n", schoolchild[0].name);
	strcpy(schoolchild[0].name, "Sidorov");
	printf("T2: Write[name] = %s\n", schoolchild[0].name);
        flag[1] = 0;
        printf("T2: Noncritical Region.\n");
   }
}
