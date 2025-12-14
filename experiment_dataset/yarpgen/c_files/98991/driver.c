#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2851329620217550654LL;
unsigned char var_6 = (unsigned char)178;
signed char var_8 = (signed char)81;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)5777;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 869399301160430900ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
