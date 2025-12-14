#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5391;
int var_3 = -1246286134;
signed char var_7 = (signed char)74;
signed char var_9 = (signed char)57;
int zero = 0;
signed char var_10 = (signed char)-36;
long long int var_11 = -2306176189772067302LL;
short var_12 = (short)21149;
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
