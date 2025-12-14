#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)72;
signed char var_5 = (signed char)24;
signed char var_7 = (signed char)63;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)93;
signed char var_15 = (signed char)98;
int zero = 0;
signed char var_16 = (signed char)-55;
signed char var_17 = (signed char)-88;
signed char var_18 = (signed char)-94;
signed char var_19 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
