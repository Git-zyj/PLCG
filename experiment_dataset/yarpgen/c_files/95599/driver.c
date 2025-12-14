#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13405226921670480248ULL;
unsigned long long int var_1 = 13962987692837486478ULL;
_Bool var_3 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 8634069235726605066ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
