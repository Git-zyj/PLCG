#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2547;
unsigned char var_2 = (unsigned char)43;
unsigned short var_4 = (unsigned short)46090;
int var_7 = -2137262631;
long long int var_12 = -4138252669380034156LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 982404577U;
signed char var_20 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
