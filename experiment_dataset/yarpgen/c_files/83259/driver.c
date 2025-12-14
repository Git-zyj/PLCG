#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
unsigned char var_10 = (unsigned char)203;
signed char var_11 = (signed char)-121;
unsigned int var_12 = 1565830246U;
signed char var_15 = (signed char)-37;
int zero = 0;
signed char var_18 = (signed char)-8;
signed char var_19 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
