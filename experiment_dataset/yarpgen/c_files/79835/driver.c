#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27890;
unsigned long long int var_14 = 17472430767081500678ULL;
int zero = 0;
unsigned long long int var_17 = 15631828537614504203ULL;
unsigned long long int var_18 = 1969623317589352332ULL;
unsigned long long int var_19 = 12977327539330690625ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
