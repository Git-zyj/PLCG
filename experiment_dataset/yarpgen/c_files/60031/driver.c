#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3515523481U;
unsigned int var_1 = 2750611839U;
unsigned int var_2 = 3239438567U;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 3025104115U;
unsigned int var_12 = 3642276052U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
