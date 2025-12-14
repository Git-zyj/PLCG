#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-26407;
unsigned char var_2 = (unsigned char)87;
unsigned short var_4 = (unsigned short)11530;
unsigned short var_7 = (unsigned short)2461;
_Bool var_8 = (_Bool)1;
long long int var_9 = 7950960346954724544LL;
unsigned short var_11 = (unsigned short)28472;
unsigned char var_13 = (unsigned char)36;
unsigned int var_14 = 2063153214U;
int zero = 0;
unsigned short var_18 = (unsigned short)17534;
unsigned char var_19 = (unsigned char)43;
int var_20 = -1022319245;
unsigned int var_21 = 971850382U;
short var_22 = (short)26700;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
