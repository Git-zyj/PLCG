#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)238;
unsigned long long int var_1 = 12155320803708404634ULL;
_Bool var_2 = (_Bool)0;
long long int var_5 = 1426745025172623661LL;
short var_7 = (short)7511;
int var_8 = 1706811052;
signed char var_10 = (signed char)-81;
int var_12 = -468102850;
int zero = 0;
long long int var_16 = -4440658947104043003LL;
unsigned int var_17 = 2417208514U;
unsigned int var_18 = 1397356605U;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
