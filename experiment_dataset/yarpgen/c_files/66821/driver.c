#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2055922663U;
short var_5 = (short)-17749;
signed char var_6 = (signed char)103;
unsigned int var_7 = 1289920231U;
unsigned long long int var_11 = 15315885823313202055ULL;
unsigned int var_12 = 189377946U;
unsigned int var_13 = 1771083577U;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-16939;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
