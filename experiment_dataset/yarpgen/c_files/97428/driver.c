#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-1721;
unsigned long long int var_6 = 13214011182077828802ULL;
unsigned long long int var_7 = 839060793705952199ULL;
int zero = 0;
long long int var_10 = -7839009337124651016LL;
unsigned int var_11 = 3403609323U;
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
