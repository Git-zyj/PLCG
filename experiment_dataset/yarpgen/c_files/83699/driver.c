#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 690301649;
unsigned long long int var_3 = 3332824458482797130ULL;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = -1734922124;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
