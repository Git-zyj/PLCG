#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)171;
long long int var_4 = -7532581862027303107LL;
long long int var_5 = -3165686067257743537LL;
unsigned int var_7 = 2129645636U;
long long int var_8 = -7305333255612108226LL;
int zero = 0;
unsigned int var_13 = 1930587085U;
signed char var_14 = (signed char)66;
unsigned short var_15 = (unsigned short)18999;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
