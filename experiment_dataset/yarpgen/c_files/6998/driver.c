#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 574023029U;
unsigned short var_4 = (unsigned short)4956;
unsigned short var_11 = (unsigned short)8104;
unsigned long long int var_12 = 14094585394948315749ULL;
int zero = 0;
signed char var_13 = (signed char)50;
short var_14 = (short)-12851;
unsigned short var_15 = (unsigned short)15976;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
