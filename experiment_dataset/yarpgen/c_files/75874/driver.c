#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 3331633919630811978ULL;
unsigned long long int var_3 = 4453660586174072060ULL;
unsigned long long int var_6 = 16071359206554446815ULL;
unsigned long long int var_7 = 7773431939191693792ULL;
unsigned long long int var_9 = 269476918132216767ULL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 12025039820190050884ULL;
unsigned long long int var_13 = 6128402352970066204ULL;
unsigned long long int var_14 = 3107075516948172827ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
