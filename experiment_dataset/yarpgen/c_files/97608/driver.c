#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)115;
unsigned char var_3 = (unsigned char)46;
unsigned int var_4 = 4291107007U;
unsigned char var_5 = (unsigned char)240;
unsigned int var_7 = 1520544663U;
int var_8 = -1431370913;
short var_10 = (short)-3273;
int var_11 = -2138354287;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 10207998628382090702ULL;
unsigned short var_17 = (unsigned short)63456;
int var_18 = -1182557816;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
