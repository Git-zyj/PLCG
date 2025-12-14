#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1539652061;
unsigned long long int var_7 = 14122400538713282617ULL;
unsigned short var_10 = (unsigned short)13724;
int zero = 0;
short var_12 = (short)3515;
long long int var_13 = -5642852879267730137LL;
int var_14 = 2116203443;
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
