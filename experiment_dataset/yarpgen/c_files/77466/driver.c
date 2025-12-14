#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)15158;
signed char var_4 = (signed char)54;
unsigned int var_9 = 3721010391U;
int zero = 0;
signed char var_10 = (signed char)94;
unsigned long long int var_11 = 2309943730764119783ULL;
int var_12 = 1903684883;
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
