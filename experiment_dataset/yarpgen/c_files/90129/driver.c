#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 710446521572336622LL;
short var_2 = (short)-5609;
unsigned short var_3 = (unsigned short)56771;
int var_4 = -881499023;
unsigned int var_5 = 833798746U;
int var_7 = -1704535880;
int var_8 = 107140422;
int zero = 0;
unsigned short var_11 = (unsigned short)59556;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
