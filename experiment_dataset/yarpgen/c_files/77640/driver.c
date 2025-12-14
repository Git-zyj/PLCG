#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2806542945U;
long long int var_3 = 1200941938686167342LL;
signed char var_10 = (signed char)6;
unsigned int var_11 = 3980799224U;
unsigned int var_15 = 2519429136U;
unsigned long long int var_16 = 15375445906357900505ULL;
int zero = 0;
long long int var_20 = -5258105063615013501LL;
long long int var_21 = -6142347513236146685LL;
unsigned short var_22 = (unsigned short)4064;
unsigned short var_23 = (unsigned short)29887;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
