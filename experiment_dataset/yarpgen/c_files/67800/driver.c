#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-69;
unsigned int var_2 = 855269177U;
signed char var_6 = (signed char)-20;
signed char var_8 = (signed char)-61;
int var_11 = 307708940;
int zero = 0;
int var_18 = -276063008;
int var_19 = 1782755554;
unsigned int var_20 = 3856987U;
signed char var_21 = (signed char)-98;
int var_22 = -813388605;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
