#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)46078;
unsigned long long int var_5 = 10576228947190009949ULL;
long long int var_9 = 1489266780272776397LL;
long long int var_12 = 3813104069533128035LL;
unsigned short var_14 = (unsigned short)42184;
int zero = 0;
unsigned int var_18 = 2892139503U;
unsigned short var_19 = (unsigned short)25598;
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
