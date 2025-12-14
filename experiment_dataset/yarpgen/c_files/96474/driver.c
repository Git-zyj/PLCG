#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)885;
int var_3 = -1105854045;
unsigned short var_4 = (unsigned short)34749;
unsigned short var_6 = (unsigned short)50216;
unsigned short var_10 = (unsigned short)498;
unsigned long long int var_12 = 13214257177257813214ULL;
short var_13 = (short)-19291;
int zero = 0;
signed char var_16 = (signed char)-7;
unsigned long long int var_17 = 10941684525157571836ULL;
unsigned long long int var_18 = 9482914953008036209ULL;
int var_19 = -1619249501;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
