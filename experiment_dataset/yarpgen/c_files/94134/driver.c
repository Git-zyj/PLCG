#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 821111653905466592ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_14 = 13524685286673541023ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
