#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)8772;
int var_3 = -907573151;
unsigned char var_4 = (unsigned char)65;
long long int var_5 = 4866270470664032045LL;
unsigned int var_6 = 2736425080U;
long long int var_7 = 1487643500371407885LL;
int var_10 = 1277445753;
int zero = 0;
unsigned char var_13 = (unsigned char)55;
int var_14 = 1869361810;
void init() {
}

void checksum() {
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
