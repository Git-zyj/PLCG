#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)71;
long long int var_4 = 8178705241107478259LL;
unsigned int var_5 = 1372098433U;
long long int var_13 = 7980307474793451282LL;
unsigned int var_15 = 962882176U;
signed char var_17 = (signed char)12;
int zero = 0;
unsigned long long int var_19 = 9282741506585474049ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
