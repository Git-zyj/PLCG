#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
signed char var_1 = (signed char)71;
short var_2 = (short)-9481;
signed char var_3 = (signed char)21;
unsigned long long int var_6 = 5731872394769116656ULL;
short var_7 = (short)-31276;
unsigned long long int var_8 = 13431979520016056593ULL;
signed char var_9 = (signed char)67;
int zero = 0;
signed char var_10 = (signed char)73;
unsigned char var_11 = (unsigned char)12;
int var_12 = 462588596;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
