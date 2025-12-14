#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)35742;
unsigned short var_4 = (unsigned short)43787;
int var_8 = 255183806;
signed char var_11 = (signed char)-121;
int zero = 0;
long long int var_14 = 6199051367561798836LL;
unsigned short var_15 = (unsigned short)31137;
signed char var_16 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
