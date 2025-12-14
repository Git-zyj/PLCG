#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
unsigned long long int var_2 = 10428438299818656187ULL;
int var_3 = 395477093;
unsigned char var_4 = (unsigned char)131;
unsigned int var_5 = 4187596319U;
unsigned int var_7 = 2345081112U;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)113;
int var_12 = -1389271204;
unsigned char var_13 = (unsigned char)252;
int zero = 0;
unsigned long long int var_15 = 7743608702942140639ULL;
unsigned int var_16 = 1669022291U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
