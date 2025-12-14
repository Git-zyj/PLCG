#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)2202;
int var_7 = -835169956;
unsigned long long int var_16 = 2516204966201788579ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)58276;
unsigned char var_21 = (unsigned char)136;
unsigned int var_22 = 4134845003U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
