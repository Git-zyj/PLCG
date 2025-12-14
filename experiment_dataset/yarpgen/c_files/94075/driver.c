#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -810470273;
signed char var_5 = (signed char)8;
signed char var_9 = (signed char)53;
unsigned long long int var_11 = 17152240315962927746ULL;
unsigned short var_13 = (unsigned short)344;
unsigned short var_14 = (unsigned short)3614;
unsigned short var_16 = (unsigned short)49771;
int zero = 0;
unsigned long long int var_18 = 16196106080034292251ULL;
int var_19 = 570587273;
unsigned char var_20 = (unsigned char)85;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
