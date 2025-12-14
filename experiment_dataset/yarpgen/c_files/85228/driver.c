#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1343820130U;
unsigned char var_11 = (unsigned char)73;
unsigned int var_13 = 1956147652U;
unsigned int var_18 = 2069024186U;
int zero = 0;
unsigned char var_19 = (unsigned char)154;
unsigned int var_20 = 575016887U;
unsigned short var_21 = (unsigned short)28785;
long long int var_22 = -3738805874579197100LL;
int var_23 = 1614488874;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
