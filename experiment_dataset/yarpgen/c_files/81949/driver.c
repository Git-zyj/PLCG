#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
unsigned char var_1 = (unsigned char)118;
unsigned char var_5 = (unsigned char)128;
unsigned long long int var_7 = 14071856311607616118ULL;
unsigned char var_9 = (unsigned char)246;
unsigned char var_11 = (unsigned char)11;
unsigned int var_12 = 3751712114U;
unsigned short var_13 = (unsigned short)35452;
unsigned short var_14 = (unsigned short)21656;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 3769087541U;
unsigned int var_18 = 2977451243U;
unsigned short var_19 = (unsigned short)41250;
short var_20 = (short)15879;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
