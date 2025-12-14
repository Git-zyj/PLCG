#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6087031508283616114LL;
long long int var_5 = 7987593726076278848LL;
int var_7 = -1831827161;
long long int var_9 = 1309239918508459471LL;
short var_10 = (short)-17392;
int zero = 0;
unsigned int var_14 = 1611088407U;
unsigned char var_15 = (unsigned char)217;
long long int var_16 = -6183920456705810616LL;
int var_17 = -1431557037;
unsigned short var_18 = (unsigned short)42063;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
