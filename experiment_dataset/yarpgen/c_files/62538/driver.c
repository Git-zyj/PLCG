#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)98;
int var_9 = -1928078990;
unsigned char var_10 = (unsigned char)193;
short var_12 = (short)-2473;
unsigned char var_15 = (unsigned char)216;
unsigned short var_17 = (unsigned short)60244;
int zero = 0;
long long int var_19 = 8253984791649417816LL;
unsigned long long int var_20 = 5235452996068383496ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
