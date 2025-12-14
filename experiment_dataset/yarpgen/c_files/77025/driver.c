#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3312;
signed char var_1 = (signed char)-54;
int var_10 = -2103304758;
int zero = 0;
signed char var_12 = (signed char)41;
unsigned char var_13 = (unsigned char)30;
signed char var_14 = (signed char)-49;
void init() {
}

void checksum() {
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
