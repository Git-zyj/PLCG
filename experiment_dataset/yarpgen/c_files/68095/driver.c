#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1496236599;
unsigned char var_2 = (unsigned char)43;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)(-127 - 1);
short var_8 = (short)14687;
short var_9 = (short)6222;
unsigned char var_10 = (unsigned char)106;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)-67;
short var_15 = (short)-16464;
int zero = 0;
signed char var_17 = (signed char)111;
short var_18 = (short)-6999;
void init() {
}

void checksum() {
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
