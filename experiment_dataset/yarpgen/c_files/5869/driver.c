#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1615056128;
unsigned char var_3 = (unsigned char)247;
unsigned long long int var_5 = 5180313572098959653ULL;
unsigned short var_6 = (unsigned short)13709;
long long int var_7 = -7451039608458905982LL;
int var_8 = 927910083;
unsigned char var_9 = (unsigned char)107;
int zero = 0;
unsigned char var_11 = (unsigned char)43;
short var_12 = (short)-21992;
long long int var_13 = -3409351888602940063LL;
long long int var_14 = 7557926889399144745LL;
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
