#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)141;
int var_6 = 1918093827;
unsigned char var_10 = (unsigned char)105;
unsigned long long int var_12 = 5387063262730095949ULL;
int zero = 0;
long long int var_18 = -3963005969102234003LL;
int var_19 = -547120325;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
