#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5555387973407859372LL;
long long int var_12 = -5168883099108854698LL;
long long int var_13 = 3232988552397439684LL;
int zero = 0;
long long int var_16 = -6433835626289518585LL;
signed char var_17 = (signed char)-83;
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
