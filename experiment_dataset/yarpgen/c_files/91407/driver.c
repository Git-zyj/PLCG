#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)28;
unsigned short var_3 = (unsigned short)6014;
unsigned short var_4 = (unsigned short)54170;
unsigned char var_5 = (unsigned char)63;
unsigned int var_6 = 2092755404U;
int var_9 = -1468462426;
unsigned long long int var_10 = 12222691943325144251ULL;
int var_11 = -1627122919;
unsigned int var_14 = 1430161561U;
short var_15 = (short)-31910;
int var_17 = 21433147;
int zero = 0;
short var_18 = (short)-908;
_Bool var_19 = (_Bool)0;
short var_20 = (short)23070;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
