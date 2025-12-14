#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_10 = 5671094725735493191LL;
unsigned long long int var_12 = 7226562079236797125ULL;
int zero = 0;
unsigned long long int var_13 = 5175796041853153164ULL;
long long int var_14 = 3582811584248783411LL;
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
