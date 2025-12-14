#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8193046188975766919ULL;
unsigned long long int var_3 = 17156751434184411928ULL;
unsigned long long int var_6 = 17988361838568424382ULL;
int var_8 = 1132260288;
int var_10 = -233245678;
int zero = 0;
unsigned long long int var_11 = 11393310617570733822ULL;
int var_12 = 32701590;
void init() {
}

void checksum() {
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
