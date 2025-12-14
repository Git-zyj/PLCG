#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1004844863;
int var_1 = -786944916;
unsigned short var_3 = (unsigned short)48102;
signed char var_5 = (signed char)-6;
short var_6 = (short)289;
unsigned long long int var_7 = 7867723146590452261ULL;
unsigned int var_9 = 1000611510U;
int zero = 0;
short var_10 = (short)-11882;
long long int var_11 = 7707226280409969183LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
