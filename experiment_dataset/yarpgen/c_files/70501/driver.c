#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1421127608U;
unsigned long long int var_2 = 13578115671297584862ULL;
short var_4 = (short)32322;
long long int var_5 = 6360156610865773788LL;
int zero = 0;
signed char var_10 = (signed char)118;
signed char var_11 = (signed char)-86;
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
