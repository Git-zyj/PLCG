#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)58364;
unsigned char var_4 = (unsigned char)211;
unsigned long long int var_5 = 12154957627458221281ULL;
int zero = 0;
unsigned long long int var_10 = 6179872311151710223ULL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1872610896U;
unsigned char var_13 = (unsigned char)192;
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
