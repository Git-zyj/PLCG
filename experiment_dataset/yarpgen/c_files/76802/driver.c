#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1762165807;
signed char var_7 = (signed char)89;
long long int var_10 = -2365917628543805775LL;
int zero = 0;
unsigned short var_16 = (unsigned short)991;
long long int var_17 = 7679550733359597248LL;
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
