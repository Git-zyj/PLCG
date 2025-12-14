#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1184583923U;
int var_3 = 2133628569;
int var_4 = 1469341449;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1937918086U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
