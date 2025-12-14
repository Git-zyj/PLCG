#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3995203184781953665LL;
unsigned int var_4 = 2372029960U;
unsigned short var_5 = (unsigned short)49749;
signed char var_9 = (signed char)100;
unsigned short var_11 = (unsigned short)51707;
unsigned char var_14 = (unsigned char)116;
int zero = 0;
unsigned char var_17 = (unsigned char)6;
unsigned char var_18 = (unsigned char)76;
unsigned char var_19 = (unsigned char)45;
short var_20 = (short)1295;
long long int var_21 = 8499726854663395602LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
