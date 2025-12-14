#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)13;
unsigned short var_4 = (unsigned short)23043;
unsigned char var_5 = (unsigned char)201;
signed char var_6 = (signed char)-73;
unsigned char var_7 = (unsigned char)216;
int var_8 = 1967531902;
signed char var_10 = (signed char)47;
int var_12 = -1484640067;
long long int var_16 = 7867954370436804524LL;
int zero = 0;
long long int var_20 = 2400370582769945578LL;
signed char var_21 = (signed char)-96;
unsigned int var_22 = 4273848207U;
long long int var_23 = -8287478989380210586LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
