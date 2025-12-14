#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2045937587U;
unsigned char var_3 = (unsigned char)104;
unsigned int var_5 = 2755989071U;
_Bool var_7 = (_Bool)1;
long long int var_8 = 3431423260383017314LL;
signed char var_12 = (signed char)38;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 2485282317U;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3290388428U;
long long int var_20 = -4667793706653177349LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
