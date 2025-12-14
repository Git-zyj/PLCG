#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1949971178U;
unsigned long long int var_3 = 4051019751469593567ULL;
signed char var_7 = (signed char)61;
unsigned int var_11 = 3046024084U;
unsigned long long int var_12 = 15380424682818304074ULL;
int zero = 0;
int var_13 = -1395676613;
signed char var_14 = (signed char)-95;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
