#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-83;
unsigned int var_2 = 3846222688U;
signed char var_3 = (signed char)92;
unsigned int var_4 = 2947278718U;
unsigned short var_7 = (unsigned short)30491;
int zero = 0;
long long int var_10 = -5140384721985496033LL;
unsigned short var_11 = (unsigned short)51966;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
