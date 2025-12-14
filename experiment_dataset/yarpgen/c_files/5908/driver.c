#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3830866793U;
unsigned int var_3 = 2109724779U;
short var_5 = (short)3171;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1081070295U;
unsigned long long int var_11 = 7848205455784156740ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)3726;
unsigned int var_13 = 3292502832U;
int var_14 = 1191449873;
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
