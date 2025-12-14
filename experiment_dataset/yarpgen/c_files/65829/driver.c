#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12762;
unsigned short var_5 = (unsigned short)6822;
long long int var_7 = 8279964959495723334LL;
_Bool var_9 = (_Bool)0;
unsigned char var_18 = (unsigned char)220;
int zero = 0;
unsigned char var_19 = (unsigned char)170;
unsigned short var_20 = (unsigned short)39380;
void init() {
}

void checksum() {
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
