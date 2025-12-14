#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 280390430;
unsigned short var_1 = (unsigned short)32594;
unsigned char var_3 = (unsigned char)233;
signed char var_5 = (signed char)-21;
long long int var_6 = 2966141758237864023LL;
long long int var_7 = 1513660045359406258LL;
unsigned short var_8 = (unsigned short)53182;
unsigned int var_9 = 4036735626U;
int zero = 0;
unsigned char var_10 = (unsigned char)98;
int var_11 = 272947241;
unsigned char var_12 = (unsigned char)88;
unsigned short var_13 = (unsigned short)47116;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
