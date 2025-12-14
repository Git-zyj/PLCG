#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)103;
signed char var_4 = (signed char)84;
unsigned int var_5 = 4251733405U;
_Bool var_11 = (_Bool)1;
long long int var_12 = -8859384523458263666LL;
int var_15 = 1430083123;
unsigned long long int var_16 = 15609853809111885362ULL;
unsigned char var_17 = (unsigned char)201;
signed char var_18 = (signed char)86;
int zero = 0;
signed char var_19 = (signed char)40;
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
