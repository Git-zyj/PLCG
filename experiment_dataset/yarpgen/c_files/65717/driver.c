#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
unsigned int var_1 = 3796788210U;
unsigned int var_2 = 2704768298U;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 1879882766U;
int var_6 = 727407509;
unsigned int var_8 = 4094588609U;
int var_10 = 1012693671;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 310747739U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
