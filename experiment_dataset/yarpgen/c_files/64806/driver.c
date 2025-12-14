#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
long long int var_5 = -8537141484513590247LL;
short var_8 = (short)29710;
unsigned char var_9 = (unsigned char)112;
unsigned char var_11 = (unsigned char)73;
int zero = 0;
unsigned short var_13 = (unsigned short)27189;
unsigned int var_14 = 291836291U;
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
