#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 7815640890800423799ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)30236;
short var_10 = (short)-1899;
unsigned long long int var_11 = 18127298212817283460ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)5944;
long long int var_17 = 6522255228715277740LL;
int zero = 0;
short var_18 = (short)-12281;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
