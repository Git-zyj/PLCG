#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 587549965;
int var_9 = -999344338;
unsigned short var_11 = (unsigned short)35933;
int zero = 0;
signed char var_20 = (signed char)-46;
int var_21 = -1993163864;
int var_22 = 1575461520;
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
