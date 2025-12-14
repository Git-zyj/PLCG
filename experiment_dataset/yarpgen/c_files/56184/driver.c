#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32148;
unsigned int var_6 = 1960407170U;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-40;
short var_9 = (short)22154;
signed char var_11 = (signed char)-39;
int zero = 0;
unsigned int var_15 = 814256077U;
long long int var_16 = 733482312764002499LL;
unsigned int var_17 = 2835933754U;
void init() {
}

void checksum() {
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
