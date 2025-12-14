#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20582;
unsigned short var_3 = (unsigned short)26019;
long long int var_6 = -1448476050443718768LL;
unsigned char var_12 = (unsigned char)172;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -3481006644148533473LL;
unsigned char var_17 = (unsigned char)136;
short var_18 = (short)12260;
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
