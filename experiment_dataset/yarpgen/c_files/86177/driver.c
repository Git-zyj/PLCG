#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9132076253751245840ULL;
_Bool var_7 = (_Bool)0;
int var_10 = 2098450606;
unsigned long long int var_11 = 7005777206922115627ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 17745956949474768813ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
