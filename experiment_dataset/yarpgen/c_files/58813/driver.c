#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 425034161U;
unsigned long long int var_6 = 2258041249882171054ULL;
signed char var_16 = (signed char)62;
int zero = 0;
signed char var_18 = (signed char)-41;
unsigned int var_19 = 1849081313U;
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
