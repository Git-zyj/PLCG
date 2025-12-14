#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2079665449;
int var_3 = -2090369182;
int var_4 = 952019460;
unsigned int var_6 = 3134641339U;
int zero = 0;
long long int var_10 = -6809074652657626538LL;
unsigned long long int var_11 = 14223837314099061281ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
