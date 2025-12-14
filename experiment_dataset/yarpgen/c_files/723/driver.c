#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 1796922785;
unsigned int var_12 = 1969418492U;
long long int var_14 = -6226797337420806040LL;
int var_15 = -1071410559;
int zero = 0;
int var_17 = 383812533;
long long int var_18 = 259508667966089318LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
