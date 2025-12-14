#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5633686814513057712LL;
signed char var_3 = (signed char)88;
unsigned int var_5 = 604336324U;
signed char var_7 = (signed char)41;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3666084540U;
signed char var_15 = (signed char)65;
void init() {
}

void checksum() {
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
