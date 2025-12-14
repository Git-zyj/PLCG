#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1518206889U;
short var_7 = (short)2567;
unsigned char var_14 = (unsigned char)213;
long long int var_15 = 3872947773941790862LL;
int zero = 0;
signed char var_18 = (signed char)1;
unsigned char var_19 = (unsigned char)105;
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
