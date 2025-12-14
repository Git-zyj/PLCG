#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1241716556U;
unsigned int var_4 = 921678268U;
unsigned int var_6 = 3443220574U;
short var_15 = (short)-15094;
int zero = 0;
short var_18 = (short)-23383;
long long int var_19 = 8114319538338513310LL;
unsigned long long int var_20 = 11244866063030529587ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
