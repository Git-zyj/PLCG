#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7885390049544920903LL;
long long int var_4 = -8580025501533999166LL;
unsigned char var_5 = (unsigned char)95;
short var_7 = (short)-24461;
int zero = 0;
signed char var_11 = (signed char)-6;
unsigned long long int var_12 = 4459960221558829783ULL;
signed char var_13 = (signed char)-117;
int var_14 = -1432039477;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
