#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13290;
unsigned char var_3 = (unsigned char)212;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)-73;
int zero = 0;
short var_12 = (short)-19216;
unsigned char var_13 = (unsigned char)182;
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
