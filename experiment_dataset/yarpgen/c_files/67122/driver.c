#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)87;
unsigned short var_8 = (unsigned short)33939;
long long int var_9 = 9106738137120101947LL;
signed char var_10 = (signed char)115;
signed char var_14 = (signed char)66;
int zero = 0;
unsigned short var_16 = (unsigned short)52999;
unsigned short var_17 = (unsigned short)12923;
void init() {
}

void checksum() {
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
