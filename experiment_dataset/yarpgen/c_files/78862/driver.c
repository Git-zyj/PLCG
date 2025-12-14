#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2510945955U;
int var_1 = 816525619;
long long int var_2 = 3919278356429261493LL;
unsigned int var_4 = 3887854309U;
signed char var_5 = (signed char)-114;
unsigned int var_6 = 2925327126U;
signed char var_11 = (signed char)78;
int zero = 0;
signed char var_12 = (signed char)18;
long long int var_13 = -3838578945323487833LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
