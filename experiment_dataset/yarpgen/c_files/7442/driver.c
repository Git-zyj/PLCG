#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-36;
unsigned long long int var_9 = 6002264021799093885ULL;
signed char var_10 = (signed char)117;
int zero = 0;
signed char var_12 = (signed char)-93;
unsigned long long int var_13 = 9689934266240329918ULL;
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
