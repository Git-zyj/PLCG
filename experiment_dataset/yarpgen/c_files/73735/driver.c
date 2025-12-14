#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
signed char var_2 = (signed char)-112;
signed char var_18 = (signed char)30;
unsigned int var_19 = 3370604677U;
int zero = 0;
unsigned int var_20 = 4041176471U;
unsigned char var_21 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
