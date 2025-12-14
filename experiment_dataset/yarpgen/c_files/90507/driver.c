#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16316;
int var_6 = 2005574442;
unsigned char var_10 = (unsigned char)54;
unsigned int var_13 = 4063541228U;
int zero = 0;
unsigned int var_14 = 404353089U;
unsigned int var_15 = 1931749489U;
unsigned short var_16 = (unsigned short)57661;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
