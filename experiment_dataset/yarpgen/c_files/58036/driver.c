#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)18710;
unsigned int var_5 = 1536766723U;
_Bool var_7 = (_Bool)0;
short var_9 = (short)20331;
unsigned long long int var_10 = 14626494213386711729ULL;
unsigned long long int var_13 = 15568450808514233596ULL;
int var_14 = -1136704854;
unsigned long long int var_17 = 12371692958075212451ULL;
int zero = 0;
int var_20 = 730172761;
signed char var_21 = (signed char)-93;
int var_22 = 160961027;
unsigned long long int var_23 = 9953718807254511370ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
