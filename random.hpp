#include <sys/time.h>
#include <iostream>

using namespace std;

int randint(){
    struct timeval tp;
    gettimeofday(&tp, NULL);
    long int n = tp.tv_usec;
    while(n >= 10){
        n /= 10;    
    }
    return n;
}

