#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6701985817999897872ULL;
short var_5 = (short)-2163;
_Bool var_6 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)104;
unsigned long long int var_14 = 593594522282309448ULL;
unsigned int var_15 = 4264760096U;
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
