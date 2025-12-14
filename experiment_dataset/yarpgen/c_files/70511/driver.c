#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2756;
short var_5 = (short)-2695;
unsigned long long int var_10 = 14965858857577965040ULL;
int zero = 0;
int var_13 = 1087613342;
unsigned int var_14 = 1766113655U;
unsigned long long int var_15 = 1450233852916304646ULL;
void init() {
}

void checksum() {
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
