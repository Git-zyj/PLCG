#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7974;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)45;
unsigned int var_6 = 3883911692U;
short var_7 = (short)-23916;
signed char var_9 = (signed char)-29;
unsigned int var_15 = 839693429U;
int zero = 0;
unsigned short var_16 = (unsigned short)36165;
unsigned int var_17 = 2807526863U;
unsigned char var_18 = (unsigned char)10;
void init() {
}

void checksum() {
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
