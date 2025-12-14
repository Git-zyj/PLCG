#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1274;
long long int var_4 = 7117876936327419617LL;
unsigned short var_9 = (unsigned short)62964;
int zero = 0;
unsigned char var_10 = (unsigned char)6;
int var_11 = 950305252;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
