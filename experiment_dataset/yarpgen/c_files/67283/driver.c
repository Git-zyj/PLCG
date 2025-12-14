#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1604012960;
short var_5 = (short)13504;
short var_7 = (short)-15749;
unsigned long long int var_8 = 311134571545543569ULL;
unsigned short var_11 = (unsigned short)47567;
unsigned char var_12 = (unsigned char)249;
signed char var_15 = (signed char)-114;
int zero = 0;
unsigned short var_19 = (unsigned short)5583;
int var_20 = -1282580729;
signed char var_21 = (signed char)49;
long long int var_22 = -6770081759319598323LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
