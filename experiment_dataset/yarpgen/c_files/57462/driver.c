#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 174569515U;
unsigned char var_3 = (unsigned char)100;
unsigned int var_4 = 3366901640U;
unsigned short var_5 = (unsigned short)2945;
int var_6 = -2045284285;
int zero = 0;
unsigned short var_13 = (unsigned short)64467;
int var_14 = -1536128186;
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
