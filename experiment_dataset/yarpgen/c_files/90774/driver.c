#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 590409703900632328ULL;
unsigned long long int var_4 = 8694824040505966774ULL;
long long int var_5 = 6882017279620816317LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -658283914;
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
