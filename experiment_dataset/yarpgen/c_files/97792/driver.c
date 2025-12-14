#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4638352303338842973LL;
signed char var_2 = (signed char)101;
long long int var_3 = 1611617712409231182LL;
unsigned short var_4 = (unsigned short)2096;
signed char var_5 = (signed char)5;
signed char var_6 = (signed char)-36;
signed char var_8 = (signed char)-78;
signed char var_9 = (signed char)-3;
signed char var_10 = (signed char)28;
long long int var_12 = -2904747797722503276LL;
unsigned short var_15 = (unsigned short)4160;
int var_16 = -416977168;
signed char var_18 = (signed char)-17;
unsigned int var_19 = 1007046069U;
int zero = 0;
signed char var_20 = (signed char)65;
short var_21 = (short)-10673;
int var_22 = 419963552;
unsigned long long int var_23 = 6225174976515618021ULL;
unsigned char var_24 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
