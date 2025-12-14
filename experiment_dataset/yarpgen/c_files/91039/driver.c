#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8888938226352341491ULL;
short var_3 = (short)1150;
unsigned char var_5 = (unsigned char)192;
unsigned short var_6 = (unsigned short)21745;
unsigned int var_7 = 3196712123U;
unsigned long long int var_8 = 6462627332768020377ULL;
int zero = 0;
long long int var_11 = 4149119834266763275LL;
unsigned long long int var_12 = 10618363574360690354ULL;
short var_13 = (short)28078;
long long int var_14 = -2472708297691638876LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
