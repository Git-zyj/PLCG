#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2037602781224631851LL;
unsigned long long int var_1 = 308872403977576902ULL;
unsigned short var_3 = (unsigned short)46389;
unsigned short var_4 = (unsigned short)41483;
int var_5 = 1650957921;
long long int var_6 = 2104421713061191063LL;
short var_7 = (short)22475;
long long int var_9 = 8544469843102974739LL;
int zero = 0;
int var_13 = 1694365978;
unsigned int var_14 = 3426910418U;
unsigned long long int var_15 = 2558946936126410813ULL;
short var_16 = (short)-28983;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
