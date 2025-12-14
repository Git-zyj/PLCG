#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
short var_6 = (short)-21663;
long long int var_10 = 1519466285519485944LL;
int var_12 = 1384443954;
unsigned long long int var_16 = 383594872030663695ULL;
int zero = 0;
int var_17 = -1904731748;
unsigned long long int var_18 = 1500659447204899349ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
