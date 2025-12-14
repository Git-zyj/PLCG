#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23862;
unsigned char var_2 = (unsigned char)72;
long long int var_3 = 5916388521217207169LL;
unsigned int var_4 = 4059362640U;
unsigned char var_5 = (unsigned char)73;
signed char var_6 = (signed char)-34;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 13267529773345259744ULL;
unsigned int var_12 = 2781919043U;
unsigned long long int var_13 = 7329164753429499920ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)17545;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
