#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1807233984;
unsigned long long int var_4 = 12534836991786676553ULL;
signed char var_5 = (signed char)74;
unsigned int var_8 = 1688848026U;
unsigned int var_9 = 1789081196U;
long long int var_11 = 1719084698360382838LL;
unsigned short var_12 = (unsigned short)23274;
unsigned short var_14 = (unsigned short)28623;
long long int var_16 = 1507020510341654044LL;
short var_17 = (short)7042;
int zero = 0;
int var_18 = 78394452;
unsigned int var_19 = 1200099338U;
unsigned short var_20 = (unsigned short)45306;
short var_21 = (short)19866;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
