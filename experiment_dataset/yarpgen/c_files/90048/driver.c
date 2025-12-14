#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)147;
unsigned char var_5 = (unsigned char)20;
unsigned short var_9 = (unsigned short)38549;
short var_11 = (short)5750;
int zero = 0;
unsigned char var_13 = (unsigned char)2;
short var_14 = (short)3136;
unsigned int var_15 = 451219000U;
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
