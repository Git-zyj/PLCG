#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)143;
signed char var_2 = (signed char)-101;
unsigned short var_5 = (unsigned short)26320;
unsigned char var_10 = (unsigned char)179;
unsigned int var_11 = 1377514261U;
int zero = 0;
long long int var_13 = 8875753986020737550LL;
unsigned int var_14 = 4115417166U;
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
