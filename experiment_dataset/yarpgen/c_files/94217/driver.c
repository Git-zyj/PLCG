#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)10;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)42;
unsigned char var_10 = (unsigned char)55;
signed char var_11 = (signed char)-81;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 699857064U;
unsigned short var_15 = (unsigned short)48209;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
