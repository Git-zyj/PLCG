#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)133;
_Bool var_2 = (_Bool)0;
unsigned int var_5 = 3362277061U;
unsigned char var_6 = (unsigned char)62;
unsigned char var_7 = (unsigned char)57;
unsigned char var_8 = (unsigned char)227;
unsigned long long int var_9 = 901080166497993347ULL;
long long int var_10 = -4421713924606327234LL;
unsigned char var_11 = (unsigned char)62;
int zero = 0;
unsigned long long int var_13 = 15504728483299851350ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-4059;
unsigned short var_16 = (unsigned short)21050;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
