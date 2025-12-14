#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25580;
unsigned long long int var_2 = 13890336569196713657ULL;
short var_3 = (short)5111;
unsigned long long int var_5 = 5714374677146687718ULL;
unsigned char var_6 = (unsigned char)210;
unsigned short var_8 = (unsigned short)32708;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 674190635U;
int zero = 0;
int var_11 = -1074553534;
short var_12 = (short)32075;
_Bool var_13 = (_Bool)1;
short var_14 = (short)646;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
