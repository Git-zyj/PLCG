#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28368;
unsigned long long int var_13 = 3207480624523699134ULL;
signed char var_15 = (signed char)-38;
signed char var_18 = (signed char)123;
int zero = 0;
unsigned long long int var_19 = 12677679433322951478ULL;
int var_20 = 1573745925;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
