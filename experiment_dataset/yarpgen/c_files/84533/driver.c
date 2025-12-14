#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-93;
signed char var_11 = (signed char)-83;
int var_12 = -1038915967;
unsigned long long int var_15 = 8474899313903111567ULL;
int zero = 0;
unsigned int var_19 = 2315707044U;
unsigned int var_20 = 3879575319U;
unsigned short var_21 = (unsigned short)55618;
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
