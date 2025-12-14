#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55259;
unsigned long long int var_7 = 12536618145510113241ULL;
long long int var_8 = 6582126571998430269LL;
unsigned short var_9 = (unsigned short)39087;
unsigned short var_11 = (unsigned short)2410;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = -8188112378432693718LL;
signed char var_15 = (signed char)-88;
short var_16 = (short)6442;
void init() {
}

void checksum() {
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
