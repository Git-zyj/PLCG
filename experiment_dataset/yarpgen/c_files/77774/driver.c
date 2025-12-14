#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 534063769U;
long long int var_15 = -9152045466787845490LL;
unsigned char var_16 = (unsigned char)73;
unsigned long long int var_17 = 16245389165022479935ULL;
unsigned long long int var_19 = 6392675839215549047ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)134;
unsigned short var_21 = (unsigned short)53920;
void init() {
}

void checksum() {
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
