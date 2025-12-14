#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45525;
unsigned char var_1 = (unsigned char)104;
signed char var_2 = (signed char)66;
unsigned char var_3 = (unsigned char)74;
unsigned char var_6 = (unsigned char)242;
int var_7 = -577143343;
signed char var_10 = (signed char)27;
unsigned int var_11 = 34190695U;
signed char var_15 = (signed char)-35;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 514360039U;
short var_21 = (short)-18806;
void init() {
}

void checksum() {
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
