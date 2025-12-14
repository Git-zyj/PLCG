#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
unsigned short var_3 = (unsigned short)8612;
unsigned short var_4 = (unsigned short)1740;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)214;
int zero = 0;
unsigned long long int var_10 = 11355237986677793247ULL;
unsigned long long int var_11 = 11152607711144517549ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
