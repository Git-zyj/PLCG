#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)205;
unsigned short var_7 = (unsigned short)7333;
unsigned short var_10 = (unsigned short)45107;
signed char var_11 = (signed char)-47;
int zero = 0;
unsigned char var_12 = (unsigned char)57;
int var_13 = -1222567914;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
