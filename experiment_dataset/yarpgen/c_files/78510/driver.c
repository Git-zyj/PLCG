#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51567;
unsigned int var_1 = 63521623U;
long long int var_3 = 8718486383392934283LL;
long long int var_4 = 5420111453889891329LL;
int var_6 = -1391257527;
unsigned short var_8 = (unsigned short)14065;
unsigned long long int var_9 = 5693039040467576282ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)56;
unsigned char var_13 = (unsigned char)150;
int var_14 = -1723843710;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
