#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13907;
_Bool var_5 = (_Bool)1;
int var_17 = 1280296754;
int zero = 0;
unsigned int var_18 = 3553972924U;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14989697444120204819ULL;
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
