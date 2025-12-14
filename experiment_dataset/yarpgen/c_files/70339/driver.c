#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56981;
long long int var_1 = -3044962221945037056LL;
short var_5 = (short)-26051;
unsigned char var_6 = (unsigned char)201;
unsigned int var_8 = 3311364476U;
long long int var_9 = -2769784301259562785LL;
unsigned short var_11 = (unsigned short)1147;
int zero = 0;
unsigned short var_14 = (unsigned short)4568;
int var_15 = 1927360026;
unsigned char var_16 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
