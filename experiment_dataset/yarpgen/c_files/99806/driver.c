#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16491;
signed char var_2 = (signed char)55;
unsigned char var_8 = (unsigned char)16;
unsigned long long int var_15 = 7364656599677703271ULL;
int zero = 0;
int var_16 = -1231794690;
signed char var_17 = (signed char)63;
int var_18 = -1960005544;
short var_19 = (short)-14871;
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
