#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
short var_4 = (short)-1162;
unsigned short var_10 = (unsigned short)15262;
unsigned short var_12 = (unsigned short)31932;
int zero = 0;
unsigned char var_14 = (unsigned char)21;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)4443;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
