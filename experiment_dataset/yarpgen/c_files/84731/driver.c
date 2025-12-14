#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
long long int var_6 = 4075951077060964310LL;
long long int var_8 = 1983963610066682872LL;
signed char var_11 = (signed char)-25;
_Bool var_12 = (_Bool)0;
short var_13 = (short)21333;
short var_14 = (short)27305;
signed char var_16 = (signed char)-22;
int var_17 = 1824606630;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2638158680U;
unsigned char var_20 = (unsigned char)70;
void init() {
}

void checksum() {
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
