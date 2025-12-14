#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
int var_3 = -1958248808;
int var_5 = 1954084686;
unsigned int var_6 = 2320537217U;
unsigned long long int var_8 = 1875167818044159574ULL;
unsigned long long int var_10 = 13498937863086516610ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1545569160U;
void init() {
}

void checksum() {
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
