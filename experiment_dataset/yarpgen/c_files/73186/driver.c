#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7815189701326231591LL;
unsigned char var_1 = (unsigned char)233;
unsigned int var_2 = 3980843617U;
unsigned char var_4 = (unsigned char)117;
signed char var_5 = (signed char)-40;
unsigned char var_7 = (unsigned char)234;
unsigned int var_8 = 1751763831U;
int var_9 = -1854741683;
int zero = 0;
int var_10 = 1312511118;
signed char var_11 = (signed char)32;
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
