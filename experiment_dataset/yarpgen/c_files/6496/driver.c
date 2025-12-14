#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1742274238U;
unsigned char var_3 = (unsigned char)165;
unsigned long long int var_4 = 3823410160488382268ULL;
unsigned char var_5 = (unsigned char)208;
unsigned long long int var_7 = 2659919562705369361ULL;
int var_8 = -1308808688;
unsigned char var_9 = (unsigned char)58;
unsigned char var_10 = (unsigned char)232;
int zero = 0;
unsigned long long int var_11 = 7354508014607369830ULL;
unsigned char var_12 = (unsigned char)127;
signed char var_13 = (signed char)127;
signed char var_14 = (signed char)10;
unsigned int var_15 = 2854713610U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
