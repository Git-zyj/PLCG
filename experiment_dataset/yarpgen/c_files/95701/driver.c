#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2005584346U;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)(-127 - 1);
unsigned char var_5 = (unsigned char)21;
unsigned char var_7 = (unsigned char)192;
unsigned char var_9 = (unsigned char)98;
unsigned int var_10 = 2045115141U;
int zero = 0;
unsigned char var_11 = (unsigned char)21;
long long int var_12 = 3202463067976604684LL;
signed char var_13 = (signed char)56;
short var_14 = (short)-3651;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
