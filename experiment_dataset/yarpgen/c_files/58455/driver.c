#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 4059933000U;
unsigned int var_12 = 2928501557U;
signed char var_13 = (signed char)-106;
long long int var_18 = -7981580457649442894LL;
int zero = 0;
long long int var_19 = -2915535273273373823LL;
unsigned char var_20 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
