#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-23076;
_Bool var_4 = (_Bool)1;
int var_5 = 1347535950;
int var_8 = -1895331619;
unsigned short var_12 = (unsigned short)36846;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 6344528722438830425LL;
void init() {
}

void checksum() {
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
