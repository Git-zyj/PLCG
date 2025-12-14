#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57932;
unsigned long long int var_2 = 9127109972003069289ULL;
long long int var_3 = -6837761906001345432LL;
short var_4 = (short)-11473;
long long int var_7 = 7532770852275056094LL;
signed char var_8 = (signed char)105;
unsigned char var_10 = (unsigned char)47;
int zero = 0;
short var_12 = (short)32255;
unsigned short var_13 = (unsigned short)2208;
unsigned char var_14 = (unsigned char)144;
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
