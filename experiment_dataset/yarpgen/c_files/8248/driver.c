#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)195;
long long int var_8 = 6513904449286461805LL;
unsigned int var_9 = 3276141367U;
unsigned int var_14 = 2757348068U;
int zero = 0;
short var_17 = (short)31123;
unsigned long long int var_18 = 11279372919698682969ULL;
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
