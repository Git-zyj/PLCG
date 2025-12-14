#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65411;
unsigned long long int var_3 = 6330546743364537695ULL;
unsigned short var_5 = (unsigned short)3072;
unsigned char var_6 = (unsigned char)61;
signed char var_7 = (signed char)-91;
unsigned short var_9 = (unsigned short)58733;
int zero = 0;
short var_10 = (short)31807;
unsigned long long int var_11 = 14215148644301828427ULL;
unsigned short var_12 = (unsigned short)39946;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
