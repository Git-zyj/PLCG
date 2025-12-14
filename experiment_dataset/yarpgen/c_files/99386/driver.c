#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1015676960U;
unsigned short var_3 = (unsigned short)29355;
unsigned short var_4 = (unsigned short)16622;
unsigned char var_11 = (unsigned char)6;
long long int var_16 = 8246087999291653208LL;
int zero = 0;
unsigned short var_20 = (unsigned short)52483;
unsigned int var_21 = 1493715959U;
short var_22 = (short)19716;
unsigned char var_23 = (unsigned char)148;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
