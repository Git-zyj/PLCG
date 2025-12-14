#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11450118380628816544ULL;
unsigned long long int var_5 = 36002699698654793ULL;
signed char var_8 = (signed char)29;
unsigned long long int var_13 = 16417013550114626867ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)43;
_Bool var_20 = (_Bool)1;
int var_21 = 190379762;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
