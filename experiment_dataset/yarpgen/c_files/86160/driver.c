#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3403080141923815525LL;
int var_8 = 1082026251;
unsigned long long int var_14 = 8758775539001413955ULL;
int zero = 0;
signed char var_18 = (signed char)-26;
unsigned int var_19 = 4147199298U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
