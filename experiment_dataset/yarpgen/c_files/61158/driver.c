#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)169;
unsigned long long int var_6 = 12273408218463929922ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)25;
unsigned long long int var_16 = 4727172115937820630ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
