#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60871;
int var_1 = 1581247778;
_Bool var_3 = (_Bool)1;
int var_4 = 612436805;
int var_5 = -1472507700;
short var_8 = (short)32208;
unsigned int var_10 = 721786708U;
int var_11 = -1770002219;
int zero = 0;
int var_14 = -507068073;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-2390;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
