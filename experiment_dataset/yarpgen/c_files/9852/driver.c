#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2820550814318824432LL;
long long int var_5 = 4062972669814817264LL;
long long int var_7 = 5037327574286194743LL;
unsigned short var_11 = (unsigned short)43394;
int zero = 0;
long long int var_13 = -2188501881815627860LL;
long long int var_14 = -1164848805403742367LL;
unsigned int var_15 = 1793862382U;
long long int var_16 = -2388580496630589879LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
