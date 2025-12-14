#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12110208216480922897ULL;
signed char var_6 = (signed char)15;
signed char var_8 = (signed char)70;
int zero = 0;
unsigned long long int var_10 = 14672315458990076200ULL;
signed char var_11 = (signed char)-109;
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
