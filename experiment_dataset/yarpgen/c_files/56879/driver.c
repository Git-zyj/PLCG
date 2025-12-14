#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2984342366U;
_Bool var_6 = (_Bool)0;
int var_9 = -1087006807;
signed char var_10 = (signed char)12;
signed char var_11 = (signed char)66;
int zero = 0;
long long int var_12 = -482791951843369325LL;
int var_13 = 1287437384;
unsigned int var_14 = 4210531475U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
