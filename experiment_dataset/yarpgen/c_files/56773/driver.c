#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)69;
unsigned int var_12 = 690616029U;
unsigned long long int var_14 = 4616866966380295816ULL;
int zero = 0;
unsigned long long int var_19 = 17807981822031589554ULL;
unsigned int var_20 = 1790951708U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
