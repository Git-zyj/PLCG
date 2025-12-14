#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 134724667699725152ULL;
int var_3 = -365088127;
int var_4 = -889334665;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_13 = 1081107415;
int var_14 = 2036097990;
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
