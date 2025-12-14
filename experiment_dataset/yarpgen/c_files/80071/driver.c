#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
unsigned char var_1 = (unsigned char)238;
short var_2 = (short)-24569;
unsigned short var_3 = (unsigned short)64854;
unsigned short var_5 = (unsigned short)63702;
unsigned short var_8 = (unsigned short)62004;
short var_9 = (short)1542;
unsigned short var_10 = (unsigned short)39815;
unsigned int var_11 = 2640392480U;
int zero = 0;
unsigned short var_15 = (unsigned short)41873;
unsigned short var_16 = (unsigned short)16681;
short var_17 = (short)15626;
unsigned short var_18 = (unsigned short)59241;
void init() {
}

void checksum() {
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
