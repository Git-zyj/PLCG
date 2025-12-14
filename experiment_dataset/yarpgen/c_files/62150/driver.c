#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)15;
long long int var_7 = 2781339863869810643LL;
unsigned short var_8 = (unsigned short)40290;
int var_9 = -199044734;
unsigned int var_10 = 3014480027U;
unsigned char var_11 = (unsigned char)125;
signed char var_13 = (signed char)91;
long long int var_14 = 2652562204450577508LL;
int var_15 = 583545681;
int zero = 0;
short var_18 = (short)-6808;
short var_19 = (short)-13258;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
