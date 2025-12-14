#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1156515244824443257ULL;
unsigned char var_4 = (unsigned char)243;
_Bool var_5 = (_Bool)1;
long long int var_6 = -2661737421914151765LL;
unsigned short var_7 = (unsigned short)60411;
long long int var_8 = 7444796804378679646LL;
signed char var_13 = (signed char)-30;
int zero = 0;
unsigned int var_20 = 1147099727U;
unsigned short var_21 = (unsigned short)6425;
signed char var_22 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
