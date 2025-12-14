#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1621968858;
short var_2 = (short)19751;
unsigned long long int var_3 = 8023503567820358787ULL;
int var_4 = 1072463170;
signed char var_5 = (signed char)-102;
unsigned int var_7 = 2555299620U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)249;
unsigned int var_13 = 3446049232U;
short var_14 = (short)20357;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)14090;
unsigned long long int var_17 = 8296574666786169707ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
