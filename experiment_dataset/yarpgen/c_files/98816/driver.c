#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1760429439;
long long int var_5 = -7729298937470831361LL;
long long int var_10 = -8313508102628645010LL;
int var_11 = -574980164;
int zero = 0;
unsigned long long int var_16 = 8321307464123019911ULL;
unsigned int var_17 = 423657728U;
void init() {
}

void checksum() {
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
