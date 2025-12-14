#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-23;
int var_5 = 51348131;
unsigned long long int var_6 = 11861743146825753256ULL;
unsigned long long int var_8 = 1669678954464890114ULL;
signed char var_11 = (signed char)-98;
int zero = 0;
int var_14 = -1474257169;
signed char var_15 = (signed char)64;
long long int var_16 = 7806151620181157731LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
