#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)36264;
int var_8 = -1822996289;
int zero = 0;
unsigned char var_10 = (unsigned char)131;
unsigned long long int var_11 = 2391944243671871625ULL;
unsigned short var_12 = (unsigned short)13286;
short var_13 = (short)-17240;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
