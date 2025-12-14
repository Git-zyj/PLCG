#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63855;
unsigned short var_2 = (unsigned short)4914;
unsigned short var_5 = (unsigned short)15441;
unsigned short var_6 = (unsigned short)12239;
int zero = 0;
unsigned short var_12 = (unsigned short)8250;
unsigned short var_13 = (unsigned short)3924;
unsigned short var_14 = (unsigned short)3049;
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
