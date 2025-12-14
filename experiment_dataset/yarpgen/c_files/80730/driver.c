#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5077102636444045850ULL;
unsigned char var_3 = (unsigned char)231;
unsigned char var_6 = (unsigned char)117;
short var_10 = (short)-6151;
unsigned int var_12 = 374456056U;
unsigned long long int var_14 = 1431477358452027215ULL;
unsigned int var_15 = 2050446276U;
short var_16 = (short)-2128;
int zero = 0;
unsigned long long int var_17 = 12024890535539652474ULL;
long long int var_18 = 3253515705026895268LL;
unsigned long long int var_19 = 11499424495736219238ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
