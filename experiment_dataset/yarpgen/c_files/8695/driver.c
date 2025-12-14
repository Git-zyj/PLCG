#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20597;
unsigned short var_2 = (unsigned short)42872;
long long int var_3 = -4413727377058873391LL;
int var_4 = -1798319785;
unsigned short var_5 = (unsigned short)64107;
unsigned char var_8 = (unsigned char)138;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 13983213363990312482ULL;
long long int var_15 = -5860542802183635211LL;
short var_16 = (short)-27399;
unsigned short var_17 = (unsigned short)10385;
int zero = 0;
int var_18 = -536111335;
unsigned char var_19 = (unsigned char)0;
unsigned char var_20 = (unsigned char)6;
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
