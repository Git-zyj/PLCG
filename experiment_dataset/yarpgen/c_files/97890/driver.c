#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9441791447304073786ULL;
unsigned int var_6 = 3629083832U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2426192795U;
int zero = 0;
signed char var_12 = (signed char)52;
unsigned short var_13 = (unsigned short)29492;
unsigned int var_14 = 3323523401U;
signed char var_15 = (signed char)100;
unsigned long long int var_16 = 12458667333837152486ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
