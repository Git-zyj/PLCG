#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -736658599;
long long int var_5 = -8742860034052157726LL;
unsigned short var_7 = (unsigned short)3540;
long long int var_9 = 4454382826317142550LL;
int var_11 = 1637575409;
int var_12 = 6899875;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2621029610U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
