#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 502318759;
unsigned char var_2 = (unsigned char)101;
unsigned int var_4 = 2764282335U;
short var_6 = (short)-13781;
unsigned int var_8 = 98304901U;
int zero = 0;
int var_12 = 1266800087;
short var_13 = (short)-265;
void init() {
}

void checksum() {
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
