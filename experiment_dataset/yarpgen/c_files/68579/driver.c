#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6850581732979589070LL;
short var_4 = (short)-11498;
unsigned int var_5 = 4070421311U;
short var_8 = (short)-32428;
unsigned int var_9 = 707363618U;
short var_11 = (short)-18761;
int zero = 0;
unsigned char var_17 = (unsigned char)175;
unsigned short var_18 = (unsigned short)2428;
short var_19 = (short)500;
long long int var_20 = 7679681032972388529LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
