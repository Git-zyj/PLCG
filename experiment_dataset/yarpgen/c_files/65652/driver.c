#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)32;
unsigned short var_6 = (unsigned short)62288;
int var_8 = 1897266302;
int zero = 0;
unsigned short var_16 = (unsigned short)53330;
int var_17 = 1733053570;
short var_18 = (short)-5172;
long long int var_19 = 8637760588703801157LL;
unsigned short var_20 = (unsigned short)2072;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
