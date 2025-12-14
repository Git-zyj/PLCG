#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3197469355U;
signed char var_3 = (signed char)-13;
unsigned char var_7 = (unsigned char)1;
unsigned long long int var_9 = 18100705980446024603ULL;
int zero = 0;
unsigned long long int var_13 = 9905269861577626153ULL;
unsigned int var_14 = 1755379637U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
