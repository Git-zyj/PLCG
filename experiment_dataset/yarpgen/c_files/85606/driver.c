#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_8 = (signed char)28;
unsigned long long int var_11 = 11153697860885201196ULL;
int zero = 0;
unsigned int var_19 = 3952636851U;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 4085472911U;
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
