#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2458350010U;
unsigned char var_2 = (unsigned char)77;
unsigned short var_3 = (unsigned short)34799;
signed char var_4 = (signed char)60;
signed char var_5 = (signed char)10;
unsigned char var_6 = (unsigned char)42;
unsigned short var_8 = (unsigned short)49553;
unsigned short var_9 = (unsigned short)2577;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 324773161U;
int zero = 0;
short var_14 = (short)14212;
_Bool var_15 = (_Bool)0;
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
