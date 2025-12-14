#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7312532893078654619LL;
signed char var_6 = (signed char)47;
signed char var_9 = (signed char)91;
unsigned char var_12 = (unsigned char)108;
int zero = 0;
long long int var_13 = -1497243159437908335LL;
signed char var_14 = (signed char)16;
signed char var_15 = (signed char)-6;
signed char var_16 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
