#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5271804121654864820LL;
short var_3 = (short)8900;
int var_8 = 289297816;
signed char var_13 = (signed char)-117;
signed char var_15 = (signed char)7;
int var_16 = 349931381;
int zero = 0;
short var_18 = (short)32662;
long long int var_19 = 3568572737469477152LL;
void init() {
}

void checksum() {
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
