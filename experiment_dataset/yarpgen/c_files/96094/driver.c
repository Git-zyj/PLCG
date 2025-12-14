#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3564344890723233722ULL;
unsigned long long int var_4 = 15174024489869412149ULL;
signed char var_9 = (signed char)22;
unsigned long long int var_13 = 16689228855540764514ULL;
int var_15 = 752562734;
int zero = 0;
int var_16 = 261993884;
unsigned long long int var_17 = 8668323124778716995ULL;
void init() {
}

void checksum() {
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
