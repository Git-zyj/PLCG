#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -955405452;
unsigned short var_6 = (unsigned short)33706;
long long int var_7 = -5894058275317721493LL;
unsigned long long int var_8 = 6682809408258985857ULL;
short var_9 = (short)13751;
int zero = 0;
short var_20 = (short)-25819;
unsigned char var_21 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
