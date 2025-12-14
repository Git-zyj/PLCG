#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6577259264171569972LL;
unsigned int var_1 = 3328833005U;
unsigned long long int var_3 = 10470351010858561687ULL;
short var_5 = (short)23130;
_Bool var_10 = (_Bool)0;
int var_11 = -79072087;
int zero = 0;
unsigned long long int var_17 = 3992405880419579024ULL;
signed char var_18 = (signed char)72;
short var_19 = (short)6737;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
