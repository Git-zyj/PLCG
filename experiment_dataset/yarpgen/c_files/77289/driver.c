#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2964766914539073046ULL;
signed char var_3 = (signed char)-13;
unsigned char var_4 = (unsigned char)120;
unsigned char var_9 = (unsigned char)36;
short var_11 = (short)-13525;
short var_12 = (short)-2001;
short var_13 = (short)30827;
int var_14 = 670427912;
unsigned int var_15 = 1360266646U;
unsigned short var_16 = (unsigned short)23591;
unsigned char var_17 = (unsigned char)86;
int zero = 0;
unsigned short var_18 = (unsigned short)64126;
short var_19 = (short)42;
signed char var_20 = (signed char)51;
short var_21 = (short)3982;
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
