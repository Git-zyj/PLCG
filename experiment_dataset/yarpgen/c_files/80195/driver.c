#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)114;
short var_7 = (short)-1714;
unsigned char var_9 = (unsigned char)21;
unsigned short var_12 = (unsigned short)62966;
int zero = 0;
unsigned char var_14 = (unsigned char)82;
int var_15 = -42814704;
short var_16 = (short)11961;
unsigned char var_17 = (unsigned char)198;
short var_18 = (short)-19602;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
