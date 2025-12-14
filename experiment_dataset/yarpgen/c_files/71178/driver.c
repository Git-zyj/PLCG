#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-4;
int var_3 = -2025430849;
signed char var_4 = (signed char)97;
unsigned int var_5 = 316325286U;
int var_7 = 1033341957;
int var_9 = 952459525;
long long int var_10 = -5615137024483175818LL;
unsigned long long int var_13 = 4732860605651897803ULL;
int zero = 0;
signed char var_14 = (signed char)31;
short var_15 = (short)14237;
long long int var_16 = -3088165731157757444LL;
void init() {
}

void checksum() {
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
