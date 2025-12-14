#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27017;
unsigned long long int var_2 = 2466960684564456667ULL;
unsigned short var_3 = (unsigned short)37713;
long long int var_5 = 2455362518925692014LL;
unsigned short var_6 = (unsigned short)27978;
int var_8 = 735294603;
long long int var_9 = -2920458858723391621LL;
int zero = 0;
signed char var_12 = (signed char)39;
short var_13 = (short)1843;
signed char var_14 = (signed char)-1;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-16;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
