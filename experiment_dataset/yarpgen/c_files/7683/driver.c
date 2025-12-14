#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3021888469U;
signed char var_4 = (signed char)-115;
unsigned int var_6 = 111273316U;
unsigned char var_7 = (unsigned char)18;
unsigned int var_14 = 2805181553U;
int zero = 0;
unsigned int var_15 = 3426439747U;
long long int var_16 = -7790361168194665737LL;
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
