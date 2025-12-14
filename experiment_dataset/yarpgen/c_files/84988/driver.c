#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-110;
long long int var_4 = 156602547158307478LL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)99;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 620322258U;
signed char var_14 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
