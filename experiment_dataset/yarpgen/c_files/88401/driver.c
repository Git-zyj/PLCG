#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52533;
int var_1 = -156037183;
int var_3 = 158289902;
int var_5 = 1822541967;
int var_6 = 1624567575;
int var_7 = 177420760;
int var_8 = 1723483360;
int var_9 = 945658350;
int zero = 0;
unsigned short var_10 = (unsigned short)41968;
unsigned short var_11 = (unsigned short)28312;
int var_12 = 1438355979;
unsigned char var_13 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
