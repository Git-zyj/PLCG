#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9973062211415886823ULL;
signed char var_3 = (signed char)12;
unsigned short var_4 = (unsigned short)40862;
_Bool var_7 = (_Bool)0;
int var_8 = -162501868;
unsigned short var_11 = (unsigned short)21050;
unsigned int var_13 = 4243895419U;
unsigned long long int var_17 = 10946853040722727291ULL;
short var_18 = (short)1512;
int zero = 0;
unsigned int var_20 = 2364315479U;
long long int var_21 = 8292361839239771443LL;
unsigned int var_22 = 3746867004U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
