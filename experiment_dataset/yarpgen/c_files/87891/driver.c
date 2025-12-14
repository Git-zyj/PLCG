#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12062;
unsigned char var_3 = (unsigned char)253;
short var_4 = (short)-24026;
int var_5 = -576875468;
unsigned long long int var_6 = 2059215165483847255ULL;
long long int var_9 = -244944817450112527LL;
int zero = 0;
unsigned char var_11 = (unsigned char)91;
unsigned short var_12 = (unsigned short)45602;
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
