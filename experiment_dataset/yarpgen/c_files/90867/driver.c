#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
int var_1 = 797400731;
_Bool var_3 = (_Bool)0;
long long int var_11 = -7470024394180552579LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 687441726732955763ULL;
long long int var_17 = -4198436146855853896LL;
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
