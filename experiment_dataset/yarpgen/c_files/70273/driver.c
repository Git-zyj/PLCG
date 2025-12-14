#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)75;
short var_7 = (short)21406;
short var_9 = (short)-1486;
int zero = 0;
unsigned short var_20 = (unsigned short)3190;
unsigned int var_21 = 1373594452U;
int var_22 = -985538147;
unsigned long long int var_23 = 2643748537560412015ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
