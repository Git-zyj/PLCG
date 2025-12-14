#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1766556481;
_Bool var_2 = (_Bool)0;
int var_4 = 41003104;
unsigned long long int var_10 = 8865987751606175743ULL;
int zero = 0;
short var_15 = (short)-6828;
unsigned char var_16 = (unsigned char)79;
signed char var_17 = (signed char)-95;
unsigned short var_18 = (unsigned short)42155;
unsigned int var_19 = 3572349375U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
