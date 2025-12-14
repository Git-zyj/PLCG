#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1893;
unsigned int var_8 = 2506078146U;
signed char var_10 = (signed char)-44;
unsigned long long int var_12 = 7582566025140351803ULL;
unsigned int var_14 = 2186280159U;
short var_17 = (short)-29500;
unsigned long long int var_18 = 7801070076013464086ULL;
unsigned char var_19 = (unsigned char)2;
int zero = 0;
short var_20 = (short)-21002;
short var_21 = (short)3948;
unsigned int var_22 = 208974541U;
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
