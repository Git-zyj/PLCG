#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 357931761U;
unsigned int var_3 = 4234658394U;
int var_5 = 2049804451;
unsigned char var_10 = (unsigned char)8;
unsigned long long int var_11 = 13091828027511654640ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 975547749U;
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
