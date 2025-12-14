#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
unsigned long long int var_4 = 1749977566199567165ULL;
unsigned char var_5 = (unsigned char)128;
unsigned long long int var_6 = 5331092037460987815ULL;
unsigned char var_7 = (unsigned char)234;
unsigned long long int var_10 = 18352702541276580370ULL;
int zero = 0;
unsigned long long int var_12 = 14862999077803801209ULL;
unsigned long long int var_13 = 12464981905147178687ULL;
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
