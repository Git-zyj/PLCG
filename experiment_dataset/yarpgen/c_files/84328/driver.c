#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -45072052;
unsigned int var_3 = 3244001443U;
signed char var_6 = (signed char)23;
signed char var_9 = (signed char)-94;
unsigned int var_10 = 3531899919U;
unsigned int var_14 = 1639678462U;
unsigned char var_15 = (unsigned char)71;
int zero = 0;
int var_19 = 772950997;
unsigned int var_20 = 2044517706U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
