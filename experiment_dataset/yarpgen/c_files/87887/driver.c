#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
int var_5 = 649096313;
short var_6 = (short)6567;
unsigned char var_7 = (unsigned char)6;
int zero = 0;
unsigned short var_11 = (unsigned short)37948;
long long int var_12 = -2899541375311838859LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
