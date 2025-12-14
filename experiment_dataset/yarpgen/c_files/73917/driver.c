#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3517351967U;
unsigned int var_2 = 1558713387U;
unsigned char var_6 = (unsigned char)22;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)107;
unsigned short var_9 = (unsigned short)30651;
short var_11 = (short)-11218;
unsigned short var_12 = (unsigned short)448;
int zero = 0;
unsigned long long int var_13 = 1109993686356799173ULL;
unsigned int var_14 = 2634774616U;
void init() {
}

void checksum() {
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
