#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 703384215;
unsigned int var_1 = 1839531075U;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 1060717902U;
signed char var_7 = (signed char)89;
int var_8 = -188011158;
int zero = 0;
unsigned int var_11 = 3832893843U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 12968469156787416246ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
