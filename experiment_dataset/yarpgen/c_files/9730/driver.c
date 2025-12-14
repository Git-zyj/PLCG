#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)135;
unsigned char var_6 = (unsigned char)204;
short var_10 = (short)23200;
unsigned short var_13 = (unsigned short)60169;
unsigned int var_16 = 3435333731U;
unsigned long long int var_17 = 11158719586933449622ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)147;
short var_21 = (short)-30581;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
