#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2096;
unsigned int var_6 = 2522201176U;
unsigned char var_9 = (unsigned char)4;
unsigned int var_12 = 2583590794U;
int zero = 0;
int var_17 = 735295004;
unsigned char var_18 = (unsigned char)84;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
