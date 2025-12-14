#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8400504539632442087LL;
int var_3 = 126523176;
long long int var_6 = -5012584982404056481LL;
int var_7 = -250604847;
int zero = 0;
int var_13 = 487022641;
int var_14 = 491226978;
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
