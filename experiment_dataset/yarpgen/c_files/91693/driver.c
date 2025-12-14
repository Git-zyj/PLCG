#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)124;
int var_7 = 1781383154;
unsigned char var_8 = (unsigned char)198;
unsigned short var_12 = (unsigned short)43339;
int zero = 0;
signed char var_13 = (signed char)-47;
short var_14 = (short)11654;
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
