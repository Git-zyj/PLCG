#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)21018;
unsigned int var_7 = 3112708676U;
short var_8 = (short)13934;
unsigned short var_13 = (unsigned short)11673;
unsigned short var_18 = (unsigned short)38139;
int zero = 0;
int var_20 = 535116080;
unsigned long long int var_21 = 6861059212585559046ULL;
int var_22 = 605272605;
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
