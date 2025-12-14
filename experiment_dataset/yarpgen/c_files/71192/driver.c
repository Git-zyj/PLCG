#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 7125717594941458670ULL;
long long int var_13 = 4580974815328016773LL;
unsigned char var_18 = (unsigned char)125;
int zero = 0;
unsigned short var_20 = (unsigned short)30258;
int var_21 = 1235312427;
long long int var_22 = -5992915928892311850LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
