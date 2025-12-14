#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-2784;
short var_6 = (short)-3493;
long long int var_8 = 3206069527236794988LL;
unsigned short var_9 = (unsigned short)39449;
unsigned char var_10 = (unsigned char)14;
short var_16 = (short)3397;
int zero = 0;
unsigned char var_17 = (unsigned char)36;
unsigned char var_18 = (unsigned char)114;
short var_19 = (short)-1513;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
