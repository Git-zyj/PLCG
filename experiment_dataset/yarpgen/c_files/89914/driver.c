#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 399894539U;
unsigned short var_1 = (unsigned short)49652;
unsigned char var_8 = (unsigned char)161;
int var_11 = -1620498868;
int zero = 0;
unsigned long long int var_12 = 6140229299569863820ULL;
short var_13 = (short)30589;
long long int var_14 = 7691832813848588673LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
