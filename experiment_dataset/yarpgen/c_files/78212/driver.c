#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-101;
long long int var_6 = -7128060422259408524LL;
unsigned int var_8 = 4074424133U;
signed char var_10 = (signed char)19;
int zero = 0;
unsigned int var_11 = 725259654U;
int var_12 = 952056620;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
