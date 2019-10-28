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

char randchar(){
    char alc[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    return alc[randint()];
}

string randcharstr(){
    string als[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    return als[randint()];
}