#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1366057778U;
short var_3 = (short)15905;
signed char var_4 = (signed char)44;
signed char var_6 = (signed char)-10;
unsigned char var_7 = (unsigned char)133;
int zero = 0;
unsigned char var_11 = (unsigned char)87;
signed char var_12 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
