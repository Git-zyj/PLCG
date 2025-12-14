#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2239821640029056461LL;
int var_2 = 290130803;
long long int var_4 = 482637955004614855LL;
long long int var_5 = -342244580202889237LL;
int var_6 = 1220748978;
long long int var_10 = 6478972762391331868LL;
int var_11 = -629321921;
int zero = 0;
long long int var_13 = -3921952445384198900LL;
long long int var_14 = -3013727028501685970LL;
void init() {
}

void checksum() {
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
