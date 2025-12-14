#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 730713224U;
unsigned int var_2 = 1804692054U;
long long int var_5 = 5502025907684096873LL;
unsigned int var_6 = 988659090U;
unsigned int var_9 = 2759290334U;
unsigned char var_10 = (unsigned char)249;
unsigned int var_15 = 3062447708U;
long long int var_17 = -927625425101212270LL;
int zero = 0;
unsigned char var_18 = (unsigned char)138;
unsigned char var_19 = (unsigned char)81;
unsigned char var_20 = (unsigned char)48;
unsigned long long int var_21 = 5373194313986736728ULL;
void init() {
}

void checksum() {
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
