#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3019987088698003392LL;
unsigned char var_10 = (unsigned char)73;
signed char var_11 = (signed char)-29;
int zero = 0;
long long int var_13 = 9078422026494978256LL;
unsigned short var_14 = (unsigned short)26594;
unsigned char var_15 = (unsigned char)147;
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
