#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4902169716894248038ULL;
unsigned long long int var_4 = 11739899033314600030ULL;
signed char var_7 = (signed char)-21;
unsigned int var_8 = 468936629U;
unsigned short var_12 = (unsigned short)46803;
int var_13 = 1343239416;
int zero = 0;
unsigned short var_14 = (unsigned short)24247;
unsigned int var_15 = 1034645053U;
unsigned int var_16 = 4012988236U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
