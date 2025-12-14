#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2091522941U;
long long int var_2 = 3049245314227725352LL;
unsigned int var_4 = 541190418U;
unsigned int var_6 = 2789970306U;
int zero = 0;
long long int var_13 = -2767352139751462361LL;
unsigned short var_14 = (unsigned short)17919;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
