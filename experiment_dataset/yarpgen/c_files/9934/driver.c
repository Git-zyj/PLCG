#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2715399905U;
signed char var_11 = (signed char)-44;
int zero = 0;
long long int var_20 = -4086270293756476046LL;
unsigned long long int var_21 = 16008525639168216851ULL;
signed char var_22 = (signed char)114;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
