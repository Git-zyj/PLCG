#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14319;
unsigned long long int var_4 = 12139583752355278466ULL;
unsigned int var_5 = 57394568U;
short var_6 = (short)31231;
short var_7 = (short)-12090;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)56452;
unsigned long long int var_15 = 7893591258175517357ULL;
unsigned long long int var_16 = 16029692746002346799ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
