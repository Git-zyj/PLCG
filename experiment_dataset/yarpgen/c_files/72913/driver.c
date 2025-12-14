#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_4 = 3414674627U;
long long int var_5 = 8704946245030558467LL;
int var_6 = 313611129;
long long int var_7 = 5566629292488247854LL;
long long int var_8 = 6404989771428886099LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_13 = -1337936083;
unsigned short var_14 = (unsigned short)19196;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
