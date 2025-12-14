#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1212494325;
signed char var_7 = (signed char)-25;
unsigned long long int var_8 = 878921614328001864ULL;
unsigned short var_11 = (unsigned short)20601;
int zero = 0;
int var_14 = 1367625668;
unsigned char var_15 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
