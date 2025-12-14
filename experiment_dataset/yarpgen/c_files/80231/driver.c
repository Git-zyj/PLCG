#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47849;
unsigned char var_3 = (unsigned char)171;
short var_7 = (short)-2343;
signed char var_10 = (signed char)-77;
int zero = 0;
unsigned long long int var_11 = 133796382405754783ULL;
signed char var_12 = (signed char)110;
signed char var_13 = (signed char)-41;
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
