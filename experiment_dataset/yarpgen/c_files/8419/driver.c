#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7751020248801373425ULL;
unsigned int var_1 = 3157967794U;
unsigned char var_7 = (unsigned char)173;
int zero = 0;
unsigned short var_17 = (unsigned short)34678;
unsigned int var_18 = 3375017529U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
