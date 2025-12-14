#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)234;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)23061;
unsigned short var_8 = (unsigned short)39967;
unsigned char var_10 = (unsigned char)127;
unsigned int var_11 = 2707777769U;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)23098;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
