#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15073545392467708402ULL;
unsigned int var_5 = 1348656791U;
long long int var_6 = -7772861203010995825LL;
unsigned int var_8 = 304092471U;
signed char var_12 = (signed char)8;
int zero = 0;
unsigned char var_13 = (unsigned char)239;
unsigned int var_14 = 2719007489U;
long long int var_15 = -2091388579186406263LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
