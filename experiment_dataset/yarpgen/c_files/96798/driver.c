#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1093304710U;
unsigned long long int var_6 = 9691297648722832828ULL;
unsigned char var_11 = (unsigned char)15;
unsigned char var_16 = (unsigned char)54;
int zero = 0;
unsigned short var_17 = (unsigned short)40750;
short var_18 = (short)18347;
signed char var_19 = (signed char)-87;
void init() {
}

void checksum() {
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
