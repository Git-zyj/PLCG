#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2375938455557886581LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 10076429333013494723ULL;
_Bool var_5 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-120;
signed char var_13 = (signed char)77;
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
