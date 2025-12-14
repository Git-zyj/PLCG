#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1630959775;
int var_2 = 1222271528;
unsigned short var_3 = (unsigned short)52160;
signed char var_7 = (signed char)58;
int var_9 = -1070242211;
unsigned long long int var_11 = 14849623120140119538ULL;
unsigned short var_12 = (unsigned short)36946;
unsigned short var_14 = (unsigned short)14278;
unsigned int var_16 = 3081530509U;
signed char var_17 = (signed char)-123;
int zero = 0;
unsigned short var_20 = (unsigned short)49708;
unsigned int var_21 = 34765715U;
int var_22 = 562370678;
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
