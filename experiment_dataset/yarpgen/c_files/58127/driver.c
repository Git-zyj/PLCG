#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20051;
unsigned char var_1 = (unsigned char)182;
unsigned short var_2 = (unsigned short)33639;
unsigned short var_3 = (unsigned short)28673;
long long int var_5 = -4357047913092003355LL;
int var_6 = -1715998845;
unsigned short var_7 = (unsigned short)5615;
int zero = 0;
long long int var_10 = -4528790387090289631LL;
short var_11 = (short)-14216;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
