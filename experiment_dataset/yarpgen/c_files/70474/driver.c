#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2362066746U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 821820657902350293ULL;
unsigned long long int var_10 = 6433543517737561099ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)200;
int var_13 = -2008226645;
int var_14 = -603138806;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
