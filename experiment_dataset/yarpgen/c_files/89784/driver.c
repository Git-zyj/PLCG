#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4447901356544398389LL;
short var_4 = (short)19327;
signed char var_5 = (signed char)-111;
int var_6 = -1246169922;
int zero = 0;
unsigned char var_10 = (unsigned char)118;
int var_11 = -1132005006;
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
