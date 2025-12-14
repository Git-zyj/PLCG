#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -21422375;
signed char var_4 = (signed char)41;
unsigned char var_6 = (unsigned char)170;
unsigned short var_8 = (unsigned short)44478;
int zero = 0;
int var_11 = 1025723952;
unsigned short var_12 = (unsigned short)41624;
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
