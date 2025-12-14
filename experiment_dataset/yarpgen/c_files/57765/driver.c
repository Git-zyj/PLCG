#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-22;
signed char var_6 = (signed char)-16;
int var_13 = 1447931881;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)31;
_Bool var_20 = (_Bool)0;
int var_21 = -1005366434;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
