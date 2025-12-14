#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)25;
unsigned long long int var_8 = 7673210766606987879ULL;
unsigned int var_18 = 828823962U;
int zero = 0;
unsigned int var_20 = 2221354353U;
int var_21 = -653765723;
signed char var_22 = (signed char)-88;
int var_23 = -363300211;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
