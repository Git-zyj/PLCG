#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3678500298U;
unsigned char var_1 = (unsigned char)179;
signed char var_2 = (signed char)39;
unsigned char var_4 = (unsigned char)85;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 115440075U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1923381966U;
void init() {
}

void checksum() {
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
