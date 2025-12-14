#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18367288555393828418ULL;
unsigned char var_5 = (unsigned char)224;
_Bool var_6 = (_Bool)1;
unsigned long long int var_11 = 12103427029712164973ULL;
int zero = 0;
unsigned long long int var_15 = 2327793111789552182ULL;
signed char var_16 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
