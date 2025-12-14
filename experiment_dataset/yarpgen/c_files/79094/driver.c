#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3655311028U;
short var_1 = (short)13703;
int var_8 = 1227772243;
long long int var_10 = -6553048841367368077LL;
unsigned char var_15 = (unsigned char)73;
int zero = 0;
int var_17 = 1054724918;
unsigned int var_18 = 2827454463U;
unsigned int var_19 = 4207457408U;
void init() {
}

void checksum() {
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
