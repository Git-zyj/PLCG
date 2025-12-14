#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)5;
unsigned long long int var_2 = 7296625286872244759ULL;
unsigned long long int var_4 = 9742274272023496886ULL;
unsigned short var_5 = (unsigned short)17757;
long long int var_13 = 2988083670352829551LL;
int zero = 0;
signed char var_15 = (signed char)73;
signed char var_16 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
