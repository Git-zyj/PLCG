#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)2666;
int var_7 = -1275756681;
int var_9 = -270939928;
int zero = 0;
unsigned long long int var_10 = 5839828971361790217ULL;
unsigned short var_11 = (unsigned short)13678;
signed char var_12 = (signed char)-115;
int var_13 = -64447068;
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
