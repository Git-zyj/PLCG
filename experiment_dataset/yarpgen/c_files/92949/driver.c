#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)139;
unsigned short var_4 = (unsigned short)17804;
short var_9 = (short)-30080;
int var_11 = -804173499;
int zero = 0;
unsigned long long int var_13 = 5713925176953411210ULL;
signed char var_14 = (signed char)-86;
void init() {
}

void checksum() {
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
