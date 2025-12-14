#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11065158648745061124ULL;
signed char var_10 = (signed char)13;
short var_17 = (short)23220;
int zero = 0;
signed char var_20 = (signed char)-74;
signed char var_21 = (signed char)44;
unsigned char var_22 = (unsigned char)75;
signed char var_23 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
