#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2110555322795522606ULL;
unsigned long long int var_2 = 2783205640281316348ULL;
signed char var_4 = (signed char)9;
unsigned int var_13 = 2961309985U;
signed char var_15 = (signed char)-4;
unsigned int var_19 = 1901628349U;
int zero = 0;
unsigned long long int var_20 = 6835740158273921930ULL;
unsigned int var_21 = 2867286770U;
void init() {
}

void checksum() {
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
