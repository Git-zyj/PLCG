#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12864;
signed char var_2 = (signed char)33;
unsigned char var_3 = (unsigned char)80;
unsigned short var_7 = (unsigned short)20908;
unsigned long long int var_12 = 4368157523700947651ULL;
int var_14 = 730470131;
int zero = 0;
unsigned short var_17 = (unsigned short)32427;
long long int var_18 = 45904803933519022LL;
unsigned short var_19 = (unsigned short)48316;
unsigned short var_20 = (unsigned short)14486;
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
