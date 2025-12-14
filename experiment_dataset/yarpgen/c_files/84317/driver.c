#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 2011794294;
short var_7 = (short)15269;
unsigned long long int var_8 = 13566875162629190105ULL;
long long int var_9 = -6465433444805091141LL;
int zero = 0;
unsigned short var_14 = (unsigned short)7519;
unsigned short var_15 = (unsigned short)39486;
int var_16 = 1287877447;
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
