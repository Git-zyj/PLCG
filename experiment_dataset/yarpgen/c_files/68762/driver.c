#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2743668520U;
unsigned int var_3 = 1684913567U;
unsigned long long int var_7 = 4229642925372682260ULL;
unsigned char var_9 = (unsigned char)172;
signed char var_14 = (signed char)-104;
unsigned short var_15 = (unsigned short)64147;
int zero = 0;
short var_16 = (short)-32249;
unsigned long long int var_17 = 9031480739879333923ULL;
short var_18 = (short)12110;
short var_19 = (short)19077;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
