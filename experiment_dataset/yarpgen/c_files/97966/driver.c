#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3281993872329834239LL;
unsigned int var_8 = 2552288413U;
unsigned int var_14 = 2228122151U;
int zero = 0;
unsigned long long int var_15 = 7620945745793044425ULL;
long long int var_16 = -5764245819718683296LL;
long long int var_17 = 8329024612228348158LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
