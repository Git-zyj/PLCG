#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13032532079204554813ULL;
short var_6 = (short)-6233;
short var_7 = (short)21899;
signed char var_9 = (signed char)-39;
short var_12 = (short)31721;
int zero = 0;
unsigned long long int var_13 = 10574472431445677367ULL;
unsigned char var_14 = (unsigned char)62;
void init() {
}

void checksum() {
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
