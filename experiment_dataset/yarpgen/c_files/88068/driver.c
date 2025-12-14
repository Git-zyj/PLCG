#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1107252853;
unsigned long long int var_4 = 1762072093350692413ULL;
unsigned long long int var_7 = 4369830392980023573ULL;
unsigned int var_8 = 3250363042U;
unsigned short var_10 = (unsigned short)34528;
short var_12 = (short)-29071;
long long int var_15 = -3099510046039399371LL;
int zero = 0;
unsigned short var_16 = (unsigned short)34774;
unsigned long long int var_17 = 4095659184572580064ULL;
void init() {
}

void checksum() {
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
