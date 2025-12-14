#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56430;
signed char var_2 = (signed char)-42;
unsigned short var_5 = (unsigned short)23649;
int var_7 = -1662421251;
short var_9 = (short)-10879;
unsigned long long int var_10 = 17720388394491126035ULL;
int var_19 = -156737265;
int zero = 0;
signed char var_20 = (signed char)43;
signed char var_21 = (signed char)-9;
long long int var_22 = -1717773572350976534LL;
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
