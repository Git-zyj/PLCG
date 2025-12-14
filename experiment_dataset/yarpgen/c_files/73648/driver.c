#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32460;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)1059;
int var_10 = -2110901607;
unsigned long long int var_11 = 5805314241933497762ULL;
unsigned short var_13 = (unsigned short)4597;
signed char var_17 = (signed char)-89;
int zero = 0;
unsigned int var_19 = 983008840U;
unsigned short var_20 = (unsigned short)14223;
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
