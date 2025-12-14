#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2372243451U;
unsigned long long int var_1 = 1642601801409562540ULL;
unsigned short var_3 = (unsigned short)10316;
unsigned long long int var_8 = 14028627873337513269ULL;
signed char var_10 = (signed char)89;
short var_11 = (short)-31236;
unsigned long long int var_12 = 10231867444337815092ULL;
int zero = 0;
int var_14 = 1221715429;
int var_15 = -517939932;
unsigned short var_16 = (unsigned short)49024;
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
