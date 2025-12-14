#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2090072274805010701LL;
unsigned short var_1 = (unsigned short)51521;
unsigned int var_2 = 2460271291U;
unsigned short var_4 = (unsigned short)55136;
short var_5 = (short)13455;
int var_6 = 1405346620;
int zero = 0;
signed char var_10 = (signed char)13;
unsigned char var_11 = (unsigned char)130;
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
