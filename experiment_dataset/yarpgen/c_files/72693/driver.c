#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1993848259;
long long int var_4 = 5510087187532279573LL;
unsigned char var_7 = (unsigned char)152;
signed char var_11 = (signed char)76;
long long int var_14 = -5557739404977953471LL;
int zero = 0;
short var_19 = (short)-6624;
unsigned int var_20 = 879376982U;
signed char var_21 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
