#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14983;
unsigned long long int var_1 = 9057156399718279093ULL;
unsigned short var_5 = (unsigned short)1305;
long long int var_7 = -9083731153937295885LL;
signed char var_13 = (signed char)-11;
int zero = 0;
unsigned long long int var_14 = 725910579934238443ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1463513422315419165LL;
int var_18 = 1223653289;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
