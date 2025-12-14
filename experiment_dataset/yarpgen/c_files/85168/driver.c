#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)226;
long long int var_4 = -7348792199934904920LL;
signed char var_7 = (signed char)56;
short var_10 = (short)15788;
short var_16 = (short)9840;
int zero = 0;
unsigned char var_19 = (unsigned char)243;
unsigned long long int var_20 = 11388752284341698672ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
