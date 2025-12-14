#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 128054419U;
unsigned char var_1 = (unsigned char)17;
unsigned int var_2 = 2772789691U;
unsigned long long int var_5 = 14484258093762632062ULL;
unsigned char var_6 = (unsigned char)241;
unsigned int var_7 = 4062847260U;
unsigned int var_11 = 3543177761U;
unsigned long long int var_12 = 2831254082553148666ULL;
unsigned int var_13 = 2764327190U;
int zero = 0;
unsigned int var_18 = 2886357443U;
unsigned int var_19 = 2210057338U;
unsigned long long int var_20 = 6212003826681473612ULL;
unsigned char var_21 = (unsigned char)41;
unsigned long long int var_22 = 11104839885825823149ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
