#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
unsigned char var_1 = (unsigned char)139;
int var_3 = 133791390;
unsigned char var_4 = (unsigned char)195;
signed char var_6 = (signed char)62;
unsigned short var_8 = (unsigned short)63742;
unsigned long long int var_11 = 18013529003974445147ULL;
unsigned int var_15 = 2940943619U;
int zero = 0;
int var_18 = -2101115344;
int var_19 = 776804658;
long long int var_20 = -8297852924482417164LL;
long long int var_21 = -711398219900580961LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
