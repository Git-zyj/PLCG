#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2100929703;
unsigned long long int var_4 = 15581187132228161855ULL;
unsigned long long int var_5 = 5701986160312512593ULL;
unsigned char var_10 = (unsigned char)62;
signed char var_13 = (signed char)-71;
unsigned short var_16 = (unsigned short)57367;
long long int var_17 = 4214816952126411290LL;
unsigned short var_18 = (unsigned short)22344;
short var_19 = (short)27064;
int zero = 0;
signed char var_20 = (signed char)37;
long long int var_21 = -946340366976247183LL;
void init() {
}

void checksum() {
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
