#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2005378301U;
unsigned int var_2 = 3780446374U;
unsigned char var_4 = (unsigned char)147;
long long int var_5 = 3274446401323283515LL;
unsigned int var_10 = 2810408227U;
int var_11 = -1246483103;
int zero = 0;
unsigned short var_17 = (unsigned short)3926;
short var_18 = (short)-27676;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
