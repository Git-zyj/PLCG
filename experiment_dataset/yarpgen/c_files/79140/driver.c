#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8588896607175303061LL;
int var_1 = 783846781;
unsigned long long int var_7 = 6324990198528015060ULL;
int zero = 0;
int var_11 = -491510337;
unsigned char var_12 = (unsigned char)187;
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
