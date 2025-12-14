#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
unsigned char var_2 = (unsigned char)24;
signed char var_7 = (signed char)104;
long long int var_12 = 5001898953607290933LL;
int zero = 0;
unsigned short var_13 = (unsigned short)40845;
unsigned int var_14 = 354060108U;
unsigned short var_15 = (unsigned short)48082;
unsigned char var_16 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
