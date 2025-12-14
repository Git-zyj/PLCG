#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 2209520809908463792ULL;
unsigned char var_10 = (unsigned char)139;
unsigned short var_11 = (unsigned short)22432;
unsigned int var_12 = 1371723708U;
long long int var_15 = 1737171561599363227LL;
int zero = 0;
long long int var_20 = -6175279889718536627LL;
unsigned int var_21 = 1311663669U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
