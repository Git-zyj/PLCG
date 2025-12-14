#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)227;
unsigned short var_5 = (unsigned short)4719;
long long int var_7 = 9200275377659436279LL;
unsigned long long int var_11 = 3630069135788108222ULL;
int zero = 0;
int var_12 = 207671536;
int var_13 = -855123231;
void init() {
}

void checksum() {
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
