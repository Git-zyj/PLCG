#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 17564642150085048367ULL;
_Bool var_13 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 5861456527996430955ULL;
short var_20 = (short)-5994;
void init() {
}

void checksum() {
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
