#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22331;
unsigned long long int var_5 = 12189987679732735957ULL;
unsigned char var_6 = (unsigned char)39;
int var_10 = 282188098;
short var_19 = (short)14276;
int zero = 0;
signed char var_20 = (signed char)-37;
short var_21 = (short)-605;
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
