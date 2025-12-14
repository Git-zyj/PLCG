#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1443224568U;
unsigned char var_1 = (unsigned char)243;
signed char var_5 = (signed char)-108;
_Bool var_6 = (_Bool)0;
int zero = 0;
int var_12 = -241557999;
int var_13 = -896991366;
unsigned int var_14 = 2161194578U;
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
