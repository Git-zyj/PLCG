#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2685211172445307182LL;
unsigned int var_2 = 3839369364U;
unsigned int var_5 = 2721894486U;
unsigned char var_6 = (unsigned char)158;
long long int var_10 = -8288708839694963568LL;
unsigned char var_11 = (unsigned char)24;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 1079168323U;
unsigned int var_15 = 1319869387U;
int zero = 0;
unsigned char var_17 = (unsigned char)95;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)22;
_Bool var_20 = (_Bool)0;
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
