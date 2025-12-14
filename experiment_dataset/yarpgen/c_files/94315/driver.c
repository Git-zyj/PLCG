#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4280162786U;
signed char var_2 = (signed char)-21;
unsigned short var_5 = (unsigned short)2102;
unsigned char var_6 = (unsigned char)151;
signed char var_8 = (signed char)30;
int var_10 = -1042213004;
int zero = 0;
int var_13 = 312401914;
unsigned long long int var_14 = 10610598174523614961ULL;
signed char var_15 = (signed char)-41;
short var_16 = (short)-21338;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
