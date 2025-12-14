#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-78;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-5;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-99;
unsigned char var_14 = (unsigned char)124;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
