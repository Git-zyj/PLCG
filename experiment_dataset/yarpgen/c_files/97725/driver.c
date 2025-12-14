#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6996302877483619894ULL;
long long int var_13 = -7495234207548211224LL;
int zero = 0;
unsigned int var_15 = 3094313535U;
unsigned short var_16 = (unsigned short)40265;
short var_17 = (short)-11989;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
