#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2519426041U;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)232;
signed char var_4 = (signed char)-41;
int var_5 = 1939668998;
unsigned char var_7 = (unsigned char)221;
int var_8 = 1398498805;
int var_9 = -1358022533;
unsigned char var_12 = (unsigned char)74;
signed char var_16 = (signed char)40;
int var_18 = 923064894;
int zero = 0;
unsigned int var_20 = 1186611968U;
short var_21 = (short)16334;
signed char var_22 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
