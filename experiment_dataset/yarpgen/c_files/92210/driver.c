#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -6695467480298403795LL;
unsigned int var_3 = 4087236367U;
signed char var_5 = (signed char)18;
long long int var_8 = -5757516452920047362LL;
int zero = 0;
short var_14 = (short)-1059;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-2995;
unsigned short var_17 = (unsigned short)22614;
signed char var_18 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
