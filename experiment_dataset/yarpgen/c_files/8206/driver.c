#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)70;
unsigned char var_6 = (unsigned char)62;
unsigned short var_8 = (unsigned short)41550;
_Bool var_9 = (_Bool)0;
unsigned char var_15 = (unsigned char)210;
int zero = 0;
unsigned char var_16 = (unsigned char)35;
unsigned short var_17 = (unsigned short)21673;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
