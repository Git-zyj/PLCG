#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8534904811123484967ULL;
long long int var_9 = 1293799076381450662LL;
unsigned int var_12 = 4209036400U;
unsigned int var_13 = 655294328U;
int zero = 0;
int var_19 = 1267003224;
long long int var_20 = -2370550679940639574LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
