#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3294;
_Bool var_1 = (_Bool)1;
unsigned short var_7 = (unsigned short)48030;
signed char var_8 = (signed char)43;
signed char var_10 = (signed char)123;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 11740374311318954731ULL;
unsigned long long int var_14 = 4844956747010983478ULL;
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
