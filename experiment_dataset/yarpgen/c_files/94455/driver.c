#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4280580625U;
short var_6 = (short)18870;
short var_8 = (short)14946;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)74;
int var_19 = 437391780;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 9932589683763004974ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
