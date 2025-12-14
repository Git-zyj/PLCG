#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17332;
unsigned char var_1 = (unsigned char)2;
unsigned int var_3 = 2692775562U;
unsigned char var_5 = (unsigned char)77;
unsigned short var_6 = (unsigned short)28244;
unsigned short var_13 = (unsigned short)36270;
int zero = 0;
unsigned int var_17 = 3872926492U;
unsigned short var_18 = (unsigned short)30190;
unsigned char var_19 = (unsigned char)199;
unsigned char var_20 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
