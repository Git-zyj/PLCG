#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9441;
long long int var_4 = -4363318522620737604LL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)24879;
unsigned long long int var_14 = 15529242285011777818ULL;
int zero = 0;
short var_15 = (short)11479;
short var_16 = (short)30782;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
