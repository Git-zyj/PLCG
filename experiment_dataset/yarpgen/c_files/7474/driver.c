#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned long long int var_3 = 7094014141960733033ULL;
unsigned int var_6 = 1269306905U;
long long int var_7 = -1203110343713649828LL;
long long int var_9 = -6205469044314530637LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 1363473188;
int var_12 = -1071736985;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
