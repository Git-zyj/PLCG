#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6029417248964799353LL;
short var_11 = (short)-27680;
signed char var_12 = (signed char)3;
unsigned short var_15 = (unsigned short)26402;
int var_16 = -963213098;
int zero = 0;
short var_17 = (short)-936;
unsigned int var_18 = 3596237194U;
unsigned short var_19 = (unsigned short)8535;
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
