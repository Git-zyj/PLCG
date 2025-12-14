#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1134763068202082258LL;
short var_2 = (short)-16216;
signed char var_4 = (signed char)97;
short var_6 = (short)-20905;
unsigned short var_7 = (unsigned short)46264;
signed char var_8 = (signed char)-94;
short var_13 = (short)-9003;
int zero = 0;
unsigned short var_19 = (unsigned short)11485;
unsigned int var_20 = 2126134452U;
unsigned int var_21 = 2549286731U;
void init() {
}

void checksum() {
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
