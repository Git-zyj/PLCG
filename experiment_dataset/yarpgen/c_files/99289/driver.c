#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1061046417;
unsigned char var_2 = (unsigned char)69;
unsigned int var_3 = 1303791316U;
int var_5 = -1830278715;
unsigned int var_6 = 1206769640U;
signed char var_8 = (signed char)42;
unsigned int var_9 = 4073011197U;
int zero = 0;
short var_10 = (short)-3618;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
