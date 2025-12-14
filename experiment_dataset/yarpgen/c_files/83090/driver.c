#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 732534592U;
short var_5 = (short)-18419;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)155;
short var_15 = (short)-3829;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)43;
short var_18 = (short)-21812;
short var_19 = (short)17477;
unsigned char var_20 = (unsigned char)13;
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
