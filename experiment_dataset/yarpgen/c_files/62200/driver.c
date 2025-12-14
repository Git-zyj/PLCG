#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27121;
unsigned short var_3 = (unsigned short)64006;
unsigned char var_9 = (unsigned char)117;
int zero = 0;
unsigned int var_11 = 3511357703U;
unsigned char var_12 = (unsigned char)15;
short var_13 = (short)-3502;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
