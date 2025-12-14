#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24475;
unsigned long long int var_5 = 6422825845862069579ULL;
short var_8 = (short)29525;
short var_10 = (short)-23914;
int zero = 0;
unsigned int var_14 = 2348248474U;
signed char var_15 = (signed char)58;
unsigned int var_16 = 4211204684U;
unsigned long long int var_17 = 8045963438028819954ULL;
unsigned long long int var_18 = 9656537461936286214ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
