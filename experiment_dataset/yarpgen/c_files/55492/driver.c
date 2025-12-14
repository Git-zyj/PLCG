#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 920669286U;
unsigned char var_3 = (unsigned char)26;
unsigned short var_5 = (unsigned short)6579;
unsigned int var_6 = 3109810303U;
int var_7 = 1063395017;
unsigned short var_8 = (unsigned short)4008;
long long int var_9 = 216808467872094854LL;
signed char var_12 = (signed char)46;
int zero = 0;
unsigned char var_13 = (unsigned char)88;
long long int var_14 = 4778551804446794985LL;
unsigned short var_15 = (unsigned short)57829;
unsigned short var_16 = (unsigned short)26026;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
