#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
long long int var_2 = -2274655628556125979LL;
int var_7 = 1683307970;
short var_8 = (short)-19799;
signed char var_10 = (signed char)-99;
unsigned char var_13 = (unsigned char)184;
int zero = 0;
signed char var_20 = (signed char)-89;
unsigned char var_21 = (unsigned char)197;
unsigned long long int var_22 = 15385387918423512668ULL;
unsigned long long int var_23 = 2786137914349135447ULL;
void init() {
}

void checksum() {
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
