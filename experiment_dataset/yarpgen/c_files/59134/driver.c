#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)123;
unsigned short var_6 = (unsigned short)60989;
unsigned char var_7 = (unsigned char)137;
unsigned int var_9 = 1279885190U;
unsigned int var_10 = 3318934329U;
unsigned long long int var_15 = 17776436757582482259ULL;
unsigned char var_17 = (unsigned char)95;
short var_18 = (short)-7551;
unsigned int var_19 = 2900129666U;
int zero = 0;
short var_20 = (short)-24804;
unsigned int var_21 = 3510439349U;
unsigned short var_22 = (unsigned short)21528;
unsigned long long int var_23 = 13921571777326214187ULL;
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
