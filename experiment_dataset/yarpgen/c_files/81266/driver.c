#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1271623705631365721ULL;
unsigned long long int var_7 = 17670788868521125601ULL;
int var_9 = -1937217422;
int zero = 0;
unsigned long long int var_11 = 16753240785277210569ULL;
int var_12 = -489939144;
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
