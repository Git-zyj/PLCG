#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)24;
unsigned short var_4 = (unsigned short)49800;
long long int var_5 = 8981397826383509868LL;
long long int var_8 = 5582147020683496880LL;
int zero = 0;
unsigned char var_11 = (unsigned char)183;
signed char var_12 = (signed char)-63;
unsigned short var_13 = (unsigned short)30033;
unsigned char var_14 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
