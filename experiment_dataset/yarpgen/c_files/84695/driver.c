#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13379;
int var_1 = 1212877296;
signed char var_4 = (signed char)79;
short var_6 = (short)-31251;
short var_10 = (short)27914;
int zero = 0;
unsigned short var_12 = (unsigned short)40600;
signed char var_13 = (signed char)-35;
unsigned char var_14 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
