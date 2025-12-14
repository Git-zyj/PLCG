#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26661;
short var_2 = (short)5540;
unsigned short var_3 = (unsigned short)64620;
unsigned char var_4 = (unsigned char)103;
signed char var_9 = (signed char)64;
int zero = 0;
long long int var_11 = 8715476275409784502LL;
signed char var_12 = (signed char)75;
int var_13 = 1931753328;
void init() {
}

void checksum() {
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
