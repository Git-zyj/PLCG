#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1069144528U;
int var_4 = 1248425214;
unsigned char var_8 = (unsigned char)52;
short var_10 = (short)6984;
int zero = 0;
signed char var_12 = (signed char)-111;
unsigned int var_13 = 3499190718U;
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
