#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1216240099618094876ULL;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)98;
unsigned short var_5 = (unsigned short)2254;
unsigned short var_8 = (unsigned short)24412;
unsigned short var_9 = (unsigned short)24523;
int var_10 = 1440371134;
signed char var_11 = (signed char)-36;
signed char var_14 = (signed char)-75;
int zero = 0;
short var_19 = (short)-6445;
unsigned int var_20 = 2154127156U;
int var_21 = 1445452019;
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
