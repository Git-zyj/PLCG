#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-112;
unsigned char var_4 = (unsigned char)88;
unsigned short var_6 = (unsigned short)11181;
unsigned int var_15 = 377688924U;
int zero = 0;
int var_17 = 841185547;
unsigned char var_18 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
