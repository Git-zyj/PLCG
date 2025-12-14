#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 416851272U;
signed char var_2 = (signed char)76;
unsigned long long int var_4 = 17376730946859245667ULL;
unsigned int var_10 = 936161250U;
int zero = 0;
unsigned char var_11 = (unsigned char)100;
long long int var_12 = -8214958198396280044LL;
void init() {
}

void checksum() {
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
