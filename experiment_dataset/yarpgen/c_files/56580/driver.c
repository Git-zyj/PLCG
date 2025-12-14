#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5511;
signed char var_2 = (signed char)21;
long long int var_4 = -1392842987391796294LL;
int var_8 = 581569096;
short var_12 = (short)-27958;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)1273;
signed char var_15 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
