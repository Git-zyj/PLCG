#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36980;
unsigned int var_1 = 595144959U;
long long int var_3 = -634905556145393073LL;
unsigned short var_5 = (unsigned short)29496;
long long int var_6 = 9024993932423497039LL;
unsigned short var_7 = (unsigned short)61099;
short var_8 = (short)6747;
unsigned int var_10 = 2979857433U;
int zero = 0;
long long int var_12 = 5290659956041741267LL;
unsigned int var_13 = 2202017595U;
signed char var_14 = (signed char)79;
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
