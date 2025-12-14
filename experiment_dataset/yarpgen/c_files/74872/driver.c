#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_6 = (unsigned char)85;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 4913833450659449414ULL;
unsigned int var_12 = 4088239780U;
unsigned short var_13 = (unsigned short)64516;
signed char var_14 = (signed char)-98;
int zero = 0;
unsigned short var_16 = (unsigned short)35543;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)19170;
unsigned int var_19 = 2469605895U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
