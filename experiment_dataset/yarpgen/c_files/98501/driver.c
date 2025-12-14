#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2062348259;
unsigned short var_5 = (unsigned short)42681;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-127;
int zero = 0;
short var_16 = (short)-23786;
int var_17 = 304631832;
void init() {
}

void checksum() {
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
