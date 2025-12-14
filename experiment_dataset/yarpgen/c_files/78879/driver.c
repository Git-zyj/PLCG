#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -642402876;
unsigned int var_2 = 1576184461U;
unsigned int var_3 = 3691256699U;
unsigned int var_4 = 3879548514U;
unsigned char var_8 = (unsigned char)55;
int var_10 = -434395614;
int zero = 0;
unsigned int var_13 = 2076027674U;
short var_14 = (short)-24557;
void init() {
}

void checksum() {
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
