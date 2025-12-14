#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-19;
signed char var_3 = (signed char)9;
signed char var_7 = (signed char)77;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-121;
signed char var_16 = (signed char)106;
signed char var_17 = (signed char)-18;
int zero = 0;
signed char var_20 = (signed char)-108;
signed char var_21 = (signed char)-99;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)2;
signed char var_24 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
