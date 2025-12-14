#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1352024818249842944ULL;
int var_4 = -911055542;
signed char var_8 = (signed char)78;
unsigned int var_10 = 815535032U;
unsigned int var_11 = 527141172U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3593077469U;
signed char var_18 = (signed char)54;
int zero = 0;
unsigned char var_20 = (unsigned char)249;
signed char var_21 = (signed char)30;
int var_22 = -2017209496;
signed char var_23 = (signed char)-127;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
