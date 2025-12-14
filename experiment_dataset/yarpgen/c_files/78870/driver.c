#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22240;
int var_3 = 882675864;
unsigned int var_4 = 59531329U;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-2631;
short var_12 = (short)31984;
int zero = 0;
unsigned short var_18 = (unsigned short)26822;
short var_19 = (short)3335;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
