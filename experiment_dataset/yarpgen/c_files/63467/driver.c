#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 336040830U;
unsigned char var_1 = (unsigned char)92;
signed char var_3 = (signed char)-126;
short var_5 = (short)21966;
unsigned char var_7 = (unsigned char)85;
unsigned long long int var_9 = 3345342924678334354ULL;
long long int var_10 = 3609491026229778305LL;
unsigned char var_11 = (unsigned char)107;
unsigned long long int var_12 = 10560707485473462313ULL;
short var_13 = (short)6153;
unsigned char var_14 = (unsigned char)18;
int zero = 0;
int var_15 = -362348586;
unsigned int var_16 = 844485689U;
signed char var_17 = (signed char)-74;
unsigned long long int var_18 = 12597673635679751291ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
