#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_15 = 16934605539912787944ULL;
int var_16 = 986987782;
int zero = 0;
unsigned char var_19 = (unsigned char)165;
long long int var_20 = 7330417703624899736LL;
short var_21 = (short)29817;
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
