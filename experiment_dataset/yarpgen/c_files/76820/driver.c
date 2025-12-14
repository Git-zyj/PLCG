#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 972671045;
int var_8 = -421650263;
unsigned short var_12 = (unsigned short)46147;
int var_13 = -1081505186;
int var_14 = 974841389;
short var_15 = (short)-14122;
int zero = 0;
short var_17 = (short)-27941;
long long int var_18 = 1190308057894289921LL;
unsigned short var_19 = (unsigned short)1082;
long long int var_20 = -8628019310428983294LL;
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
