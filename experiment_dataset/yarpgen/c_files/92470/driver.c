#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)33;
short var_7 = (short)-16025;
int var_12 = -1955832183;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)25777;
unsigned char var_18 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
