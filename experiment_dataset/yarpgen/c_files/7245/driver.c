#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1438454700U;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-24978;
unsigned int var_11 = 2974398859U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1173174296U;
long long int var_17 = 6509786644940777848LL;
int zero = 0;
unsigned char var_18 = (unsigned char)219;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)28271;
unsigned int var_21 = 1586955318U;
unsigned short var_22 = (unsigned short)10362;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
