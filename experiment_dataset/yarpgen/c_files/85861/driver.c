#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1212594225U;
int var_3 = 1643730780;
signed char var_5 = (signed char)26;
int var_6 = 447839705;
long long int var_8 = -2848741714144124369LL;
long long int var_9 = -5637320319094615796LL;
int zero = 0;
unsigned int var_12 = 3578280770U;
short var_13 = (short)2703;
short var_14 = (short)-27819;
short var_15 = (short)-16881;
unsigned char var_16 = (unsigned char)87;
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
