#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-17;
unsigned long long int var_2 = 14923976632168610744ULL;
signed char var_4 = (signed char)118;
long long int var_9 = -7689463074472702771LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2982010081U;
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
