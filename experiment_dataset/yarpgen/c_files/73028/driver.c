#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13226;
int var_2 = -1615064545;
unsigned short var_5 = (unsigned short)52611;
unsigned char var_6 = (unsigned char)18;
unsigned int var_8 = 2280001778U;
unsigned char var_9 = (unsigned char)23;
unsigned char var_10 = (unsigned char)234;
int var_12 = -107520700;
int zero = 0;
unsigned char var_13 = (unsigned char)175;
unsigned char var_14 = (unsigned char)211;
unsigned char var_15 = (unsigned char)111;
short var_16 = (short)5419;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
