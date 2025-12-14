#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9967630569768419912ULL;
unsigned long long int var_2 = 3288412854831714938ULL;
int var_3 = -90062396;
unsigned int var_4 = 160812354U;
int var_6 = 1831097454;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_15 = (short)-17890;
short var_16 = (short)5904;
unsigned char var_17 = (unsigned char)79;
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
