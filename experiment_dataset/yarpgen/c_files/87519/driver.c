#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -503258036;
unsigned short var_11 = (unsigned short)56737;
int zero = 0;
unsigned char var_12 = (unsigned char)126;
long long int var_13 = -8209105505887115357LL;
unsigned int var_14 = 3805692272U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
