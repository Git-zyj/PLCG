#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6219108280153563669LL;
signed char var_7 = (signed char)78;
signed char var_8 = (signed char)-32;
int zero = 0;
unsigned char var_18 = (unsigned char)189;
unsigned char var_19 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
