#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2210491909260580426LL;
unsigned long long int var_4 = 2707833819187265148ULL;
long long int var_11 = -4108808905204678981LL;
int zero = 0;
long long int var_13 = 6588368236208234361LL;
long long int var_14 = -613740497622169193LL;
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
