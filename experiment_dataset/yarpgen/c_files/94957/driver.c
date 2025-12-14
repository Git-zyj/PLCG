#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)93;
long long int var_3 = 2807862138054199010LL;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)84;
int zero = 0;
signed char var_10 = (signed char)36;
signed char var_11 = (signed char)-99;
int var_12 = 1423960210;
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
