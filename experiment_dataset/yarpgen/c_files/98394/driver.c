#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
unsigned char var_2 = (unsigned char)53;
unsigned char var_5 = (unsigned char)237;
signed char var_10 = (signed char)26;
int zero = 0;
short var_11 = (short)-8618;
short var_12 = (short)-28408;
unsigned int var_13 = 420255210U;
short var_14 = (short)1282;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
