#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18223440369084173091ULL;
_Bool var_7 = (_Bool)1;
int var_14 = -1411896765;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 1807932303386002145ULL;
signed char var_22 = (signed char)109;
unsigned long long int var_23 = 8210627500710184601ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
