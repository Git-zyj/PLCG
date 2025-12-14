#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)131;
long long int var_4 = 5616219076603347815LL;
unsigned short var_5 = (unsigned short)24504;
signed char var_6 = (signed char)22;
int zero = 0;
long long int var_10 = 1175047011250903205LL;
short var_11 = (short)16095;
_Bool var_12 = (_Bool)1;
int var_13 = -1196802989;
int var_14 = -1191174994;
long long int var_15 = 8073531952816803921LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
