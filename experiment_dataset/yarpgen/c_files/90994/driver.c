#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -299102152;
long long int var_7 = 487044251011690978LL;
int var_9 = -1319862231;
int zero = 0;
unsigned long long int var_15 = 5468433573851363414ULL;
int var_16 = 1622590196;
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
