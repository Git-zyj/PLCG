#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1546768407;
unsigned long long int var_1 = 9689449048464138583ULL;
int var_2 = 1298188197;
unsigned int var_3 = 1107928101U;
long long int var_4 = -3554039520298935359LL;
unsigned int var_7 = 4083871803U;
unsigned short var_8 = (unsigned short)61711;
unsigned short var_12 = (unsigned short)14117;
int zero = 0;
unsigned short var_13 = (unsigned short)641;
signed char var_14 = (signed char)-90;
unsigned int var_15 = 3531660058U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
