#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4268066232U;
unsigned int var_11 = 628218445U;
unsigned long long int var_17 = 9061865348801787380ULL;
int zero = 0;
signed char var_20 = (signed char)-8;
unsigned long long int var_21 = 10753134254853160720ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
