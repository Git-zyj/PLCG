#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_10 = (signed char)74;
unsigned short var_13 = (unsigned short)46541;
int zero = 0;
signed char var_16 = (signed char)94;
unsigned int var_17 = 2606570126U;
long long int var_18 = 8349492201381313042LL;
unsigned int var_19 = 2219409253U;
unsigned long long int var_20 = 8659899296761163238ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
