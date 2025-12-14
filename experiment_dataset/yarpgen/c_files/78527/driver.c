#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53652;
unsigned int var_6 = 68130347U;
unsigned short var_7 = (unsigned short)12752;
short var_8 = (short)-31386;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_10 = (short)29744;
long long int var_11 = -3937151371815821502LL;
unsigned short var_12 = (unsigned short)28973;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
