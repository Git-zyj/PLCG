#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26688;
signed char var_2 = (signed char)91;
unsigned short var_3 = (unsigned short)58154;
short var_5 = (short)30256;
unsigned int var_7 = 343185278U;
int zero = 0;
long long int var_10 = 306933350428756405LL;
long long int var_11 = 1847962071271068080LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
