#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 425845640;
unsigned short var_2 = (unsigned short)35693;
unsigned short var_3 = (unsigned short)37277;
signed char var_5 = (signed char)-62;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)24148;
int var_12 = 284443357;
long long int var_15 = -4315104464207835773LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 14166334687185015740ULL;
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
