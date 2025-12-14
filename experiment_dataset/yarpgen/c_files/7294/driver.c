#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56054;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned short var_13 = (unsigned short)3234;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 2187873118U;
unsigned char var_16 = (unsigned char)133;
void init() {
}

void checksum() {
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
