#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29153;
unsigned short var_2 = (unsigned short)535;
signed char var_4 = (signed char)-86;
unsigned long long int var_7 = 7618271094936256420ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-12;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
