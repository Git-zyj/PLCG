#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11674;
short var_3 = (short)-21943;
signed char var_4 = (signed char)100;
short var_5 = (short)-265;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)201;
int zero = 0;
signed char var_17 = (signed char)-13;
unsigned char var_18 = (unsigned char)252;
void init() {
}

void checksum() {
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
