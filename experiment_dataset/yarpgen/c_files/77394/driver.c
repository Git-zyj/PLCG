#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10847198531989892298ULL;
signed char var_4 = (signed char)-29;
long long int var_7 = 6047722815189126565LL;
int zero = 0;
long long int var_10 = -8764156721277557307LL;
signed char var_11 = (signed char)-99;
long long int var_12 = -667300141088982563LL;
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
