#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7972;
short var_5 = (short)-31407;
unsigned char var_6 = (unsigned char)189;
unsigned short var_8 = (unsigned short)52093;
unsigned int var_13 = 2101314953U;
int zero = 0;
unsigned char var_14 = (unsigned char)122;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
