#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)232;
unsigned char var_2 = (unsigned char)110;
int var_6 = -1011713289;
_Bool var_10 = (_Bool)1;
short var_13 = (short)23339;
short var_14 = (short)4258;
signed char var_15 = (signed char)-117;
int zero = 0;
unsigned char var_16 = (unsigned char)37;
signed char var_17 = (signed char)-15;
unsigned long long int var_18 = 222655956015527957ULL;
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
