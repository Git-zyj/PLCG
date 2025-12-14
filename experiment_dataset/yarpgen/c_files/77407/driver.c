#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 841436456U;
int var_1 = -2112785301;
unsigned short var_8 = (unsigned short)1154;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_15 = 1042849120;
short var_16 = (short)-16128;
int var_17 = -656841883;
signed char var_18 = (signed char)-2;
void init() {
}

void checksum() {
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
