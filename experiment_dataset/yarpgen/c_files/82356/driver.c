#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = -4030014703609534689LL;
unsigned int var_15 = 416529044U;
unsigned int var_19 = 1957148035U;
int zero = 0;
signed char var_20 = (signed char)109;
int var_21 = 452901827;
unsigned char var_22 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
