#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_6 = 857377836;
unsigned char var_11 = (unsigned char)223;
unsigned char var_15 = (unsigned char)114;
int zero = 0;
signed char var_16 = (signed char)-41;
int var_17 = -1929128603;
unsigned long long int var_18 = 13675818198313570997ULL;
unsigned int var_19 = 357265475U;
unsigned int var_20 = 3908302809U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
