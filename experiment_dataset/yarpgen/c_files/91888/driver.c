#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7478;
short var_2 = (short)28511;
unsigned short var_8 = (unsigned short)48288;
unsigned short var_14 = (unsigned short)5127;
int zero = 0;
unsigned char var_18 = (unsigned char)239;
signed char var_19 = (signed char)118;
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
