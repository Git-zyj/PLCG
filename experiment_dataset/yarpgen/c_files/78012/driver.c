#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16987;
unsigned short var_3 = (unsigned short)36004;
signed char var_11 = (signed char)-81;
int zero = 0;
unsigned char var_12 = (unsigned char)72;
signed char var_13 = (signed char)41;
unsigned short var_14 = (unsigned short)10967;
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
