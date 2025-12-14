#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25618;
unsigned int var_1 = 2200309249U;
unsigned long long int var_3 = 9823310884641389492ULL;
int var_5 = -716168707;
unsigned short var_8 = (unsigned short)37972;
int zero = 0;
unsigned long long int var_15 = 15339296172573123402ULL;
short var_16 = (short)-4331;
short var_17 = (short)-5019;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
