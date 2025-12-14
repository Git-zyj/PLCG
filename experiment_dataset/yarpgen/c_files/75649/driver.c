#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
unsigned long long int var_3 = 18076015190210783880ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 2169111921070863952ULL;
int var_21 = 1937504114;
unsigned int var_22 = 2023520706U;
unsigned long long int var_23 = 3909403945030998678ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
