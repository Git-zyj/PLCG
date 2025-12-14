#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)73;
unsigned int var_2 = 1451282490U;
unsigned char var_4 = (unsigned char)206;
unsigned char var_6 = (unsigned char)158;
unsigned long long int var_7 = 15587426708276504645ULL;
long long int var_8 = 4358243235177454518LL;
unsigned short var_10 = (unsigned short)42483;
int zero = 0;
long long int var_11 = -7344110698773164021LL;
unsigned long long int var_12 = 14807151212724028413ULL;
signed char var_13 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
