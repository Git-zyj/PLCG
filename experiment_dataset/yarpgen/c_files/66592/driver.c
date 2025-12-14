#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2070961833146858241LL;
short var_3 = (short)341;
unsigned int var_6 = 1607471368U;
unsigned int var_8 = 2982224272U;
int zero = 0;
unsigned int var_13 = 3027296457U;
unsigned short var_14 = (unsigned short)5490;
signed char var_15 = (signed char)27;
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
