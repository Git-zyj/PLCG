#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4198363580381128612LL;
long long int var_3 = 6023511303395041463LL;
long long int var_6 = 1906604456073526175LL;
long long int var_8 = -7015831271139340251LL;
long long int var_11 = -394565276839145493LL;
unsigned char var_12 = (unsigned char)117;
unsigned char var_15 = (unsigned char)15;
long long int var_17 = -5942328294927790307LL;
int zero = 0;
unsigned char var_18 = (unsigned char)81;
long long int var_19 = -2825378597161956823LL;
long long int var_20 = -6687255766914894133LL;
long long int var_21 = -515794485591415382LL;
long long int var_22 = 741411688358321327LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
