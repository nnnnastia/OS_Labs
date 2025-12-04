#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>

int turn = 0;

struct schoolchild {
    int s_id;
    char name[20];
    int n_class;
};

struct schoolchild schoolchild[2] = { {1, "Fedorenko", 4} };

int main(void) {
    pthread_t T2_thread, T1_thread;
    void *T1(), *T2();
    pthread_create(&T1_thread, NULL, T1, NULL);
    pthread_create(&T2_thread, NULL, T2, NULL);
    pthread_join(T1_thread, NULL);
    pthread_join(T2_thread, NULL);

    return 0;
}

void *T1() {
    for (int i = 1; i <= 3; i++) {
        while (turn != 0);
        sleep(2);
        turn = 1;
        printf("T1: Critical Region\n");
        printf("T1: Read[name] = %s\n", schoolchild[0].name);
        sleep(1);
        strcpy(schoolchild[0].name, "Tkachenko");
        printf("T1: Write[name] = %s\n", schoolchild[0].name);
        sleep(1);
        turn = 0;
        printf("T1: Noncritical Region\n");
        sleep(1);
    }

}

void *T2() {
    sleep(1);
    for (int i = 1; i <= 3; i++) {
        while (turn != 0);
        turn = 1;
        printf("T2: Critical Region\n");
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

