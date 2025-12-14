#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5518803876638293168ULL;
short var_1 = (short)32100;
signed char var_7 = (signed char)-55;
signed char var_8 = (signed char)-88;
unsigned char var_10 = (unsigned char)126;
int zero = 0;
unsigned short var_12 = (unsigned short)45890;
unsigned long long int var_13 = 17066363992802603191ULL;
signed char var_14 = (signed char)115;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
