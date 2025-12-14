#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1305093554U;
unsigned int var_3 = 2658384234U;
signed char var_5 = (signed char)107;
unsigned char var_8 = (unsigned char)17;
int zero = 0;
int var_10 = 727414216;
unsigned char var_11 = (unsigned char)71;
unsigned short var_12 = (unsigned short)27945;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
