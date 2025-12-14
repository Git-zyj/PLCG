#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 11990010524235191752ULL;
unsigned char var_9 = (unsigned char)142;
signed char var_13 = (signed char)31;
short var_14 = (short)15327;
int zero = 0;
signed char var_15 = (signed char)62;
int var_16 = -1065822184;
void init() {
}

void checksum() {
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
