#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31274;
short var_4 = (short)-24713;
int var_7 = 1579058548;
short var_14 = (short)-26525;
int zero = 0;
unsigned int var_19 = 3416757979U;
signed char var_20 = (signed char)-21;
unsigned long long int var_21 = 8423814096139900087ULL;
unsigned short var_22 = (unsigned short)39520;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
