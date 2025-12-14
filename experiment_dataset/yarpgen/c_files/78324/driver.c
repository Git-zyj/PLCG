#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3834063238104149881LL;
unsigned short var_8 = (unsigned short)50946;
int zero = 0;
unsigned long long int var_18 = 17216972389856007758ULL;
unsigned int var_19 = 2803343118U;
unsigned long long int var_20 = 16038285195677106641ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
