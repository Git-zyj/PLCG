#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27917;
unsigned short var_3 = (unsigned short)61597;
long long int var_6 = -3909473280651750314LL;
int var_8 = 2021233684;
unsigned short var_9 = (unsigned short)14601;
int zero = 0;
unsigned char var_11 = (unsigned char)52;
int var_12 = -1794528321;
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
