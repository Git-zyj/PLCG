#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1534947478;
unsigned short var_4 = (unsigned short)65223;
_Bool var_7 = (_Bool)0;
int var_8 = 688415293;
int zero = 0;
int var_10 = 1095671488;
unsigned short var_11 = (unsigned short)36174;
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
