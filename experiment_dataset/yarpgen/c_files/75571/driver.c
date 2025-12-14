#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)120;
unsigned int var_4 = 1637724598U;
_Bool var_5 = (_Bool)1;
int var_7 = 28026160;
short var_11 = (short)-25752;
unsigned short var_12 = (unsigned short)7089;
int zero = 0;
unsigned int var_13 = 3328979140U;
unsigned int var_14 = 802190215U;
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
