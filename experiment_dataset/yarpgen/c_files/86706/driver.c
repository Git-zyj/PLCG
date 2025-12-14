#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6734405838612325501LL;
unsigned int var_3 = 2574164734U;
unsigned int var_6 = 3540276944U;
short var_11 = (short)-23762;
long long int var_13 = -4013803598877921888LL;
int zero = 0;
unsigned int var_14 = 188615563U;
unsigned long long int var_15 = 12520276704408091767ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
