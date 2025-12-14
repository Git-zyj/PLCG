#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8496496437365544244LL;
unsigned long long int var_9 = 16911014495965308825ULL;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-24196;
signed char var_13 = (signed char)-17;
unsigned short var_17 = (unsigned short)20245;
unsigned short var_18 = (unsigned short)22412;
int zero = 0;
unsigned short var_19 = (unsigned short)4237;
unsigned int var_20 = 2379217772U;
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
