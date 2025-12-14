#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6813747369598638812LL;
unsigned long long int var_3 = 5247123623421032159ULL;
unsigned long long int var_4 = 1628421893289905792ULL;
unsigned long long int var_6 = 10592059704904610188ULL;
unsigned short var_7 = (unsigned short)56236;
unsigned long long int var_9 = 12207003978129595687ULL;
int zero = 0;
long long int var_10 = -5223906142257279276LL;
signed char var_11 = (signed char)-55;
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
