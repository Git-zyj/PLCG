#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1448252274U;
short var_2 = (short)-19513;
unsigned int var_4 = 360379817U;
short var_7 = (short)5504;
long long int var_9 = -5523144605594609938LL;
int zero = 0;
short var_10 = (short)14393;
int var_11 = -113405767;
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
