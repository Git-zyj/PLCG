#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16533880958587343876ULL;
unsigned int var_13 = 3835797040U;
signed char var_14 = (signed char)80;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 259636722U;
signed char var_20 = (signed char)64;
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
