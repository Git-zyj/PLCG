#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24051;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 592424653U;
_Bool var_10 = (_Bool)1;
int var_13 = 1516969744;
int zero = 0;
long long int var_17 = 7846038524004552425LL;
unsigned long long int var_18 = 16565014467867527510ULL;
unsigned char var_19 = (unsigned char)233;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
