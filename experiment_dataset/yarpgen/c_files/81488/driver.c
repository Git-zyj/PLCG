#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)103;
unsigned short var_2 = (unsigned short)35038;
unsigned short var_3 = (unsigned short)39822;
int var_5 = 1426717522;
unsigned long long int var_6 = 16291458061919573517ULL;
int var_7 = 178037847;
unsigned int var_9 = 3896152323U;
int var_10 = -240349899;
int zero = 0;
int var_12 = 1445687943;
int var_13 = 1054980627;
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
