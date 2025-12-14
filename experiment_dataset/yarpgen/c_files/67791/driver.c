#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40440;
int var_6 = -516254000;
int var_10 = 236471128;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
short var_15 = (short)13740;
unsigned short var_18 = (unsigned short)42732;
int zero = 0;
int var_19 = 1338230891;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
