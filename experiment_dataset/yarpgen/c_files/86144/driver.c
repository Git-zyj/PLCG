#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2042487200278847013LL;
unsigned short var_3 = (unsigned short)39390;
unsigned char var_5 = (unsigned char)108;
long long int var_7 = 2803997394356367122LL;
int zero = 0;
int var_15 = -812833180;
unsigned int var_16 = 3929118810U;
void init() {
}

void checksum() {
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
