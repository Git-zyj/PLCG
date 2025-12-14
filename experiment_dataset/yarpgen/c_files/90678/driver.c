#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)33;
int var_10 = -453945092;
unsigned long long int var_13 = 15583663031707127984ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -305758428;
signed char var_16 = (signed char)0;
unsigned int var_17 = 3813306480U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
