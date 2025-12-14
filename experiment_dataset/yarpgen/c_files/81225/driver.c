#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)82;
unsigned int var_5 = 1505995378U;
signed char var_6 = (signed char)19;
unsigned int var_14 = 1635667834U;
signed char var_17 = (signed char)-109;
int zero = 0;
unsigned char var_19 = (unsigned char)148;
unsigned long long int var_20 = 1519470697997845605ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
