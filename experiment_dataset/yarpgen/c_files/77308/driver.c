#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46916;
unsigned char var_5 = (unsigned char)202;
signed char var_7 = (signed char)55;
unsigned int var_8 = 103423746U;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-32074;
void init() {
}

void checksum() {
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
