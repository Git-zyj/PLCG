#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2025819032;
unsigned int var_2 = 1822156757U;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 563183587U;
unsigned long long int var_8 = 7135615794538723206ULL;
short var_9 = (short)3503;
long long int var_10 = 3574898398282450387LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-8645;
unsigned int var_15 = 3126364290U;
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
