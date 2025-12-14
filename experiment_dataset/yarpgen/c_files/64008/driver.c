#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 3738642224560184473LL;
_Bool var_9 = (_Bool)1;
int var_13 = -1515201418;
int zero = 0;
unsigned int var_15 = 3989178963U;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 7287829811167962983ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
