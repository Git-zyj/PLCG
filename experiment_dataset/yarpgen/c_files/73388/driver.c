#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22329;
signed char var_3 = (signed char)126;
unsigned int var_6 = 282659813U;
int var_8 = 1032536110;
unsigned int var_9 = 2177644629U;
signed char var_11 = (signed char)78;
short var_12 = (short)-26565;
int zero = 0;
int var_13 = -400144757;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
