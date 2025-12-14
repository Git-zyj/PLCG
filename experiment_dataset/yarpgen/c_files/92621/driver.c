#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39467;
int var_4 = -859284121;
unsigned char var_5 = (unsigned char)177;
int var_6 = 122982503;
unsigned long long int var_8 = 9992249056627636324ULL;
int zero = 0;
signed char var_10 = (signed char)-30;
signed char var_11 = (signed char)-50;
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
