#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 236445798U;
_Bool var_4 = (_Bool)0;
unsigned int var_12 = 3009587286U;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-31;
unsigned int var_19 = 2442483212U;
signed char var_20 = (signed char)109;
signed char var_21 = (signed char)107;
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
