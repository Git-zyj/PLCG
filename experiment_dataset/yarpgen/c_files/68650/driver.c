#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_5 = 4207081823U;
unsigned int var_11 = 814786175U;
signed char var_13 = (signed char)-95;
unsigned int var_14 = 3059476102U;
unsigned int var_16 = 2257350953U;
unsigned char var_17 = (unsigned char)253;
unsigned int var_18 = 2763018622U;
int zero = 0;
int var_20 = 853733737;
short var_21 = (short)15378;
_Bool var_22 = (_Bool)1;
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
