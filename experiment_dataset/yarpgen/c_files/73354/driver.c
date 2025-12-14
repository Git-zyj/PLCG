#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8644460865591379817ULL;
unsigned short var_2 = (unsigned short)18219;
unsigned int var_4 = 2017324478U;
unsigned long long int var_5 = 12448415795752460621ULL;
unsigned short var_6 = (unsigned short)34299;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2681637801U;
long long int var_9 = 1509106975040741867LL;
long long int var_10 = 542724030754671204LL;
long long int var_11 = -5428001729310918918LL;
unsigned long long int var_12 = 15469434505529269700ULL;
int zero = 0;
unsigned int var_13 = 2256856908U;
int var_14 = -1674653888;
unsigned int var_15 = 3190671456U;
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
