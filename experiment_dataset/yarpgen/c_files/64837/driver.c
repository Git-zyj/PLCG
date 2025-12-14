#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 278796434535959883ULL;
unsigned int var_3 = 870682415U;
int var_8 = -311936222;
signed char var_9 = (signed char)53;
int zero = 0;
long long int var_12 = 6129525029611486668LL;
long long int var_13 = -6488533858804582582LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
