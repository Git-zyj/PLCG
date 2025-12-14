#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4492597796980953574LL;
signed char var_3 = (signed char)36;
unsigned int var_14 = 1625181715U;
int zero = 0;
unsigned int var_17 = 2455549725U;
short var_18 = (short)22298;
unsigned long long int var_19 = 7837318838880005079ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
