#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
unsigned long long int var_4 = 6219225718690766608ULL;
unsigned char var_5 = (unsigned char)72;
unsigned short var_6 = (unsigned short)46503;
unsigned short var_10 = (unsigned short)10217;
unsigned char var_11 = (unsigned char)10;
int zero = 0;
int var_12 = -1040050752;
_Bool var_13 = (_Bool)1;
int var_14 = 1539828308;
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
