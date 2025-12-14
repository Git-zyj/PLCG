#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
unsigned long long int var_4 = 4216241255136044332ULL;
unsigned short var_7 = (unsigned short)51944;
int var_9 = 1763010742;
int zero = 0;
unsigned short var_13 = (unsigned short)35183;
int var_14 = 1163196546;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
