#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2404479197580855589LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 15468342763723027513ULL;
signed char var_8 = (signed char)-13;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2346122456U;
signed char var_11 = (signed char)53;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)2003;
int var_14 = -981848702;
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
