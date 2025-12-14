#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)92;
long long int var_2 = 220464839639932910LL;
unsigned long long int var_3 = 1846901115690622379ULL;
int var_4 = -46060805;
_Bool var_5 = (_Bool)0;
unsigned long long int var_10 = 9307580222338306358ULL;
short var_13 = (short)29258;
unsigned short var_15 = (unsigned short)44708;
short var_16 = (short)27890;
int zero = 0;
signed char var_17 = (signed char)-114;
unsigned int var_18 = 69796168U;
short var_19 = (short)-16727;
unsigned char var_20 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
