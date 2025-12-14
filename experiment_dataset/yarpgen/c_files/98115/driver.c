#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)11841;
int var_7 = 1484621440;
unsigned short var_8 = (unsigned short)61768;
unsigned char var_9 = (unsigned char)197;
int zero = 0;
unsigned long long int var_10 = 17319674878773155315ULL;
short var_11 = (short)-8648;
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
