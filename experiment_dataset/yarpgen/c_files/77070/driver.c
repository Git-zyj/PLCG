#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4950467965952965379LL;
short var_3 = (short)22535;
short var_6 = (short)-9289;
unsigned short var_7 = (unsigned short)7840;
unsigned char var_8 = (unsigned char)30;
unsigned long long int var_13 = 11592525021868247570ULL;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)6277;
unsigned long long int var_17 = 372706195862772315ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)29008;
signed char var_19 = (signed char)-125;
long long int var_20 = 8976695710283664705LL;
unsigned int var_21 = 1848355922U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
