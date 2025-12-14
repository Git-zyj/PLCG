#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 776585177934820484ULL;
unsigned long long int var_8 = 17753864829669207995ULL;
unsigned int var_12 = 3534298927U;
short var_14 = (short)14224;
int zero = 0;
long long int var_15 = -4829423958827570023LL;
unsigned int var_16 = 1498739902U;
unsigned char var_17 = (unsigned char)70;
unsigned int var_18 = 2357003736U;
signed char var_19 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
