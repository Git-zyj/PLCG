#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)128;
unsigned char var_5 = (unsigned char)63;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 15632435106824504902ULL;
unsigned char var_10 = (unsigned char)161;
int var_12 = -1199391192;
int zero = 0;
long long int var_16 = 7710281534903363284LL;
unsigned long long int var_17 = 6804145489634519315ULL;
unsigned long long int var_18 = 5405592959217672433ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
