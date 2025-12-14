#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2240;
int var_1 = 1405044476;
unsigned long long int var_2 = 6062617495046233653ULL;
unsigned long long int var_7 = 12716227117562007283ULL;
int var_11 = 1792165495;
int zero = 0;
int var_12 = 243383749;
int var_13 = -878830449;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 1233575815112544837ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
