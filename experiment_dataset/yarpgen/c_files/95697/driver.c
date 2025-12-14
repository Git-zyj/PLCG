#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56503;
unsigned short var_3 = (unsigned short)48002;
unsigned int var_4 = 3213299674U;
unsigned short var_7 = (unsigned short)17429;
unsigned long long int var_8 = 5534030162644029369ULL;
long long int var_12 = -3446487587360920987LL;
unsigned long long int var_13 = 14500470764479367136ULL;
int zero = 0;
long long int var_14 = -7145859261318324365LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 334956505U;
long long int var_17 = -5814827681762436996LL;
_Bool var_18 = (_Bool)1;
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
