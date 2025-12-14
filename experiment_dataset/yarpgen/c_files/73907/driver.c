#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 211101860U;
unsigned int var_4 = 349836511U;
signed char var_10 = (signed char)-97;
int zero = 0;
unsigned short var_12 = (unsigned short)34272;
long long int var_13 = -1668870284864300928LL;
void init() {
}

void checksum() {
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
