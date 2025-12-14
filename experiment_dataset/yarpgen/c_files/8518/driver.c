#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38793;
short var_3 = (short)27947;
signed char var_4 = (signed char)-31;
unsigned short var_6 = (unsigned short)48812;
int var_7 = -2020035947;
int zero = 0;
long long int var_10 = -7727207345930014107LL;
int var_11 = 173446905;
unsigned long long int var_12 = 9127789640363995383ULL;
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
