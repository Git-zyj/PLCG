#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1938300885;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 803721665U;
_Bool var_14 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = 168441911;
unsigned int var_21 = 3860786428U;
signed char var_22 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
