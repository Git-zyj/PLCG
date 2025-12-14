#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -886830090438935258LL;
short var_7 = (short)28771;
signed char var_15 = (signed char)-124;
int zero = 0;
unsigned long long int var_16 = 2590180211442968515ULL;
signed char var_17 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
