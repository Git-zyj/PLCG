#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)28;
unsigned short var_7 = (unsigned short)24714;
int var_11 = -261596164;
unsigned int var_12 = 2704253610U;
short var_17 = (short)14704;
unsigned char var_18 = (unsigned char)211;
int zero = 0;
unsigned long long int var_20 = 12961694349438660847ULL;
signed char var_21 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
