#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42854;
long long int var_2 = -4869357403778880156LL;
short var_4 = (short)-285;
unsigned char var_5 = (unsigned char)65;
int var_7 = -1247478801;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)77;
int var_14 = -1853139938;
long long int var_15 = -5468053975585884024LL;
int zero = 0;
unsigned char var_18 = (unsigned char)204;
int var_19 = 518323128;
long long int var_20 = 1764395562394280879LL;
short var_21 = (short)-24658;
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
