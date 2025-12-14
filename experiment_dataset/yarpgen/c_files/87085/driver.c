#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5617;
short var_2 = (short)-6760;
unsigned char var_5 = (unsigned char)54;
unsigned char var_6 = (unsigned char)15;
long long int var_8 = -3322563589082935042LL;
unsigned char var_9 = (unsigned char)253;
long long int var_11 = -7863082517449209120LL;
int zero = 0;
short var_13 = (short)-1853;
short var_14 = (short)-20980;
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
