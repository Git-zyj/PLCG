#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7443459047172830909LL;
signed char var_1 = (signed char)-32;
unsigned int var_4 = 3103509994U;
unsigned char var_6 = (unsigned char)103;
_Bool var_16 = (_Bool)0;
short var_17 = (short)7446;
int zero = 0;
long long int var_18 = 7163593565525975189LL;
int var_19 = -1485796366;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
