#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12612;
unsigned int var_4 = 1467658896U;
long long int var_8 = -7946554936649586445LL;
int zero = 0;
unsigned long long int var_10 = 14943956765468724119ULL;
unsigned int var_11 = 3686201387U;
signed char var_12 = (signed char)-27;
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
