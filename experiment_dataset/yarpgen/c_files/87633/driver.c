#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1115440859;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
short var_3 = (short)21063;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)124;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)3;
short var_13 = (short)113;
int zero = 0;
unsigned long long int var_15 = 14192107827315058762ULL;
int var_16 = -2080129569;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
