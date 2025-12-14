#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)178;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2604367825U;
int var_6 = 1538808813;
unsigned int var_7 = 1998101860U;
int var_9 = 1909299541;
unsigned char var_11 = (unsigned char)72;
int zero = 0;
int var_13 = -35762501;
unsigned int var_14 = 3919949465U;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 16504657039925324625ULL;
void init() {
}

void checksum() {
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
