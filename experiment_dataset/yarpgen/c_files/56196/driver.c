#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 824548850407816215LL;
signed char var_2 = (signed char)13;
unsigned int var_3 = 2395274713U;
short var_4 = (short)2538;
short var_5 = (short)-25230;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)43867;
int var_9 = 1405900924;
unsigned int var_10 = 1523661525U;
short var_11 = (short)7276;
unsigned int var_12 = 3524497887U;
int zero = 0;
short var_13 = (short)-28361;
short var_14 = (short)14901;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
