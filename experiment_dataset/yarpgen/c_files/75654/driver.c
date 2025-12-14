#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12897097411252677263ULL;
long long int var_8 = 405165305212280609LL;
long long int var_9 = 7594015861234339261LL;
int zero = 0;
short var_12 = (short)-28685;
long long int var_13 = -7996361088596552805LL;
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
