#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17724403001413067261ULL;
int var_3 = 367418172;
unsigned long long int var_4 = 8119408820768297233ULL;
int zero = 0;
unsigned int var_12 = 2731545438U;
unsigned long long int var_13 = 17100600229825352901ULL;
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
