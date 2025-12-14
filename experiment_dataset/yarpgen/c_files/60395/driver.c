#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)46475;
unsigned char var_10 = (unsigned char)121;
unsigned char var_13 = (unsigned char)121;
unsigned int var_15 = 2746257414U;
long long int var_18 = -8217448295751579076LL;
int zero = 0;
long long int var_19 = -3480434947728482894LL;
unsigned int var_20 = 3303239871U;
unsigned short var_21 = (unsigned short)48312;
unsigned int var_22 = 3252763203U;
int var_23 = 1573041786;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
