#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)84;
unsigned char var_10 = (unsigned char)215;
unsigned short var_13 = (unsigned short)46488;
unsigned long long int var_14 = 7649042992874027179ULL;
int zero = 0;
signed char var_18 = (signed char)18;
unsigned int var_19 = 4220081567U;
unsigned short var_20 = (unsigned short)22744;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)20143;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
