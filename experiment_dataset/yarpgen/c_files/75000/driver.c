#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2471489231U;
short var_5 = (short)-587;
signed char var_6 = (signed char)-28;
unsigned char var_9 = (unsigned char)109;
int zero = 0;
short var_10 = (short)-17902;
short var_11 = (short)18642;
unsigned long long int var_12 = 333007265517181555ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
