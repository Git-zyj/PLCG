#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16889538602041014700ULL;
unsigned char var_4 = (unsigned char)14;
signed char var_9 = (signed char)-45;
short var_10 = (short)-29388;
int zero = 0;
unsigned short var_12 = (unsigned short)7257;
unsigned short var_13 = (unsigned short)53705;
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
