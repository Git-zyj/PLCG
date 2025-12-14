#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-110;
unsigned long long int var_11 = 13965013898087319068ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
