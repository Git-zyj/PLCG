#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1171813886U;
unsigned char var_2 = (unsigned char)233;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned int var_13 = 1336122667U;
int zero = 0;
signed char var_18 = (signed char)-1;
unsigned char var_19 = (unsigned char)216;
void init() {
}

void checksum() {
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
