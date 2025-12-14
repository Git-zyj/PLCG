#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1121032324;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)73;
int zero = 0;
unsigned long long int var_13 = 17300149791328878155ULL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)114;
unsigned long long int var_16 = 4409891695345874992ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
