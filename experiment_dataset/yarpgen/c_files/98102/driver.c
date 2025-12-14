#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12389;
int var_5 = 181085449;
unsigned int var_6 = 688630184U;
int var_8 = -1453630925;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 3261321622U;
signed char var_15 = (signed char)45;
int zero = 0;
int var_16 = 2042794646;
int var_17 = -1621672759;
signed char var_18 = (signed char)-16;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
