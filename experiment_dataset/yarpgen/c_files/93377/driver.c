#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8570682854211289184ULL;
int var_2 = -1568037387;
short var_4 = (short)12217;
short var_5 = (short)21496;
unsigned char var_7 = (unsigned char)1;
signed char var_8 = (signed char)121;
int var_12 = -795263989;
int zero = 0;
signed char var_14 = (signed char)78;
unsigned int var_15 = 864049468U;
unsigned short var_16 = (unsigned short)46026;
unsigned char var_17 = (unsigned char)26;
unsigned int var_18 = 154616030U;
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
