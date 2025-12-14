#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7611548199856971185LL;
unsigned long long int var_4 = 10568053396122328827ULL;
int var_7 = -1240688525;
unsigned char var_8 = (unsigned char)247;
int zero = 0;
long long int var_10 = -6511978489697288375LL;
unsigned char var_11 = (unsigned char)26;
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
