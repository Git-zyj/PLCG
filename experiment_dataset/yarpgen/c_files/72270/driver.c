#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1456465414118176865ULL;
unsigned short var_5 = (unsigned short)30958;
unsigned short var_7 = (unsigned short)7141;
signed char var_10 = (signed char)-48;
signed char var_11 = (signed char)-17;
int zero = 0;
signed char var_13 = (signed char)122;
signed char var_14 = (signed char)79;
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
