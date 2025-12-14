#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-14143;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)46836;
signed char var_6 = (signed char)-63;
short var_9 = (short)-25706;
short var_10 = (short)-4205;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 13623428719586124031ULL;
int zero = 0;
unsigned long long int var_13 = 2293046585049008865ULL;
unsigned int var_14 = 3562946606U;
short var_15 = (short)-15483;
unsigned char var_16 = (unsigned char)54;
int var_17 = 1602009809;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
