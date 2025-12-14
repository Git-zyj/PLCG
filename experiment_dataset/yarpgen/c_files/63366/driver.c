#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3958946869U;
signed char var_2 = (signed char)-37;
unsigned short var_6 = (unsigned short)7713;
unsigned char var_7 = (unsigned char)27;
signed char var_8 = (signed char)91;
unsigned char var_11 = (unsigned char)80;
unsigned char var_12 = (unsigned char)239;
unsigned long long int var_13 = 1321349501202730963ULL;
signed char var_16 = (signed char)54;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = 182215509280507868LL;
unsigned char var_20 = (unsigned char)16;
short var_21 = (short)-15858;
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
