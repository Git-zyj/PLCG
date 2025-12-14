#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)26;
long long int var_4 = -7613615645623023591LL;
unsigned int var_7 = 3794783866U;
int zero = 0;
int var_11 = -800048280;
short var_12 = (short)-24142;
signed char var_13 = (signed char)-100;
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
