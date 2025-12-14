#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23532;
unsigned short var_2 = (unsigned short)55845;
unsigned char var_4 = (unsigned char)53;
unsigned int var_5 = 3752348782U;
unsigned int var_8 = 1528484578U;
unsigned short var_17 = (unsigned short)35345;
int zero = 0;
int var_18 = 1627716395;
unsigned short var_19 = (unsigned short)30806;
void init() {
}

void checksum() {
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
