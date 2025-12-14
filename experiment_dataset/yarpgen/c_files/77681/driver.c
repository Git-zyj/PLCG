#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
long long int var_5 = -4697960053543780638LL;
long long int var_7 = 1222857347034155686LL;
unsigned int var_8 = 3892262943U;
signed char var_10 = (signed char)-22;
int zero = 0;
signed char var_14 = (signed char)97;
unsigned char var_15 = (unsigned char)21;
long long int var_16 = 2635986932910729404LL;
unsigned char var_17 = (unsigned char)112;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
