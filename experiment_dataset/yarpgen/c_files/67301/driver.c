#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19982;
unsigned long long int var_7 = 7815224107061538592ULL;
unsigned long long int var_8 = 1400212085397689391ULL;
int var_9 = 2066480550;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = 1462916952;
unsigned int var_14 = 28608189U;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)4566;
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
