#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 503158337U;
unsigned int var_7 = 1254188847U;
unsigned int var_8 = 441261065U;
int zero = 0;
unsigned int var_11 = 2501364199U;
_Bool var_12 = (_Bool)1;
int var_13 = 1752381297;
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
