#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16533049773155521623ULL;
unsigned int var_3 = 72825274U;
signed char var_6 = (signed char)-35;
int var_8 = -657688241;
long long int var_9 = -429597763999894396LL;
int zero = 0;
unsigned char var_10 = (unsigned char)109;
unsigned short var_11 = (unsigned short)10779;
signed char var_12 = (signed char)-91;
short var_13 = (short)24742;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
