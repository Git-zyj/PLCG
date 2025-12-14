#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2457890578U;
unsigned int var_3 = 522132352U;
unsigned int var_4 = 2448582597U;
unsigned int var_12 = 1863310127U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1470352754U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
