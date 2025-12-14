#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
unsigned int var_3 = 3701131146U;
unsigned int var_4 = 944506649U;
unsigned int var_5 = 3758623711U;
signed char var_10 = (signed char)-122;
signed char var_14 = (signed char)66;
int zero = 0;
unsigned int var_19 = 4273230830U;
unsigned int var_20 = 3696145719U;
unsigned int var_21 = 2619324411U;
unsigned int var_22 = 2997309309U;
unsigned int var_23 = 2457718182U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
