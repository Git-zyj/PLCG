#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4212153730U;
long long int var_3 = 3660958808956446798LL;
short var_5 = (short)15836;
unsigned long long int var_7 = 11264422817599107686ULL;
long long int var_8 = -1403725654778762472LL;
int var_9 = 1898445994;
int zero = 0;
int var_10 = -1092769351;
short var_11 = (short)6964;
int var_12 = 1009883412;
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
