#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5788176112872877704LL;
unsigned char var_1 = (unsigned char)90;
unsigned int var_5 = 1759827330U;
unsigned char var_9 = (unsigned char)60;
short var_13 = (short)18563;
int zero = 0;
short var_20 = (short)-29774;
short var_21 = (short)2889;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
