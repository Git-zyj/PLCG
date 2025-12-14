#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
unsigned long long int var_4 = 7717030852940006559ULL;
unsigned long long int var_6 = 15740568921142044440ULL;
unsigned short var_7 = (unsigned short)30229;
int zero = 0;
unsigned int var_13 = 2834958677U;
long long int var_14 = 6285221523168192038LL;
unsigned char var_15 = (unsigned char)138;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
