#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-51;
long long int var_2 = -3994354869103169034LL;
signed char var_3 = (signed char)-40;
int var_4 = 590477253;
unsigned char var_8 = (unsigned char)239;
int zero = 0;
short var_10 = (short)30799;
int var_11 = -1295272864;
unsigned char var_12 = (unsigned char)251;
int var_13 = -1279330259;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
