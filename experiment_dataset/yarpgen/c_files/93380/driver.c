#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15391096839506376651ULL;
unsigned long long int var_5 = 16928280972547811361ULL;
unsigned long long int var_7 = 11738278433454988239ULL;
unsigned char var_10 = (unsigned char)74;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1307467040U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 795870866990057218ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
