#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)9439;
short var_6 = (short)29406;
unsigned int var_7 = 2475706578U;
unsigned short var_10 = (unsigned short)29120;
int zero = 0;
unsigned short var_11 = (unsigned short)33875;
unsigned long long int var_12 = 15994656830981497949ULL;
unsigned long long int var_13 = 4150359183168685797ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
