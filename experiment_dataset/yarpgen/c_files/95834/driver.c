#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26175;
unsigned char var_1 = (unsigned char)172;
unsigned long long int var_3 = 3139542323290626887ULL;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)58;
signed char var_7 = (signed char)-28;
unsigned char var_8 = (unsigned char)63;
long long int var_9 = -3222675969462799871LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -7552888826735073716LL;
unsigned int var_12 = 3138162947U;
unsigned long long int var_13 = 7166997970559420545ULL;
long long int var_14 = 5618468355600149119LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
