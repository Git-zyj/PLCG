#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
short var_3 = (short)-32473;
long long int var_5 = -8194737108246502573LL;
int zero = 0;
long long int var_10 = 2783481188008867337LL;
signed char var_11 = (signed char)107;
unsigned long long int var_12 = 6808288910895383227ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
