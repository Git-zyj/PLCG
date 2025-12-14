#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6317;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 979868870U;
long long int var_4 = 7079609628867550085LL;
signed char var_8 = (signed char)-12;
long long int var_10 = 6914112551676261643LL;
int zero = 0;
long long int var_11 = 5866680656741541174LL;
unsigned long long int var_12 = 10474750838847927418ULL;
unsigned long long int var_13 = 12339988234105724734ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
