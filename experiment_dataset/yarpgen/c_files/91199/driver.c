#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7798924026400109716LL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)52;
signed char var_9 = (signed char)-49;
int zero = 0;
unsigned int var_12 = 1726040934U;
unsigned int var_13 = 1862886992U;
void init() {
}

void checksum() {
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
