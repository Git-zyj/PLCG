#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_7 = 311207357U;
unsigned int var_9 = 1453230854U;
unsigned short var_10 = (unsigned short)24963;
unsigned long long int var_14 = 3756827259983944447ULL;
int zero = 0;
short var_15 = (short)29449;
unsigned char var_16 = (unsigned char)21;
unsigned long long int var_17 = 10475929117614488798ULL;
unsigned int var_18 = 3997401860U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
