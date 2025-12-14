#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1594648899;
unsigned char var_2 = (unsigned char)127;
unsigned char var_5 = (unsigned char)69;
int zero = 0;
unsigned short var_10 = (unsigned short)62280;
unsigned short var_11 = (unsigned short)32579;
unsigned char var_12 = (unsigned char)151;
unsigned short var_13 = (unsigned short)26610;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
