#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1499086873;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)5127;
long long int var_7 = -7538151969907109224LL;
unsigned char var_8 = (unsigned char)116;
unsigned int var_9 = 81207133U;
long long int var_10 = -3204690679208193481LL;
short var_11 = (short)23118;
int var_12 = 321992844;
int zero = 0;
unsigned long long int var_13 = 14445536541608009583ULL;
unsigned int var_14 = 346650783U;
unsigned long long int var_15 = 3781763601514713756ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
