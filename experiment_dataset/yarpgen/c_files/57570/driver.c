#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3545803661U;
unsigned char var_2 = (unsigned char)111;
unsigned int var_3 = 2196588386U;
unsigned int var_9 = 2495753445U;
unsigned int var_12 = 2569328777U;
int var_15 = 1771856172;
int zero = 0;
unsigned short var_16 = (unsigned short)24785;
unsigned long long int var_17 = 4001256000422895660ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
