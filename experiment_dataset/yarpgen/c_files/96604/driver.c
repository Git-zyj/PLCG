#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4342414765781821986LL;
long long int var_2 = -8442355871065451446LL;
unsigned char var_3 = (unsigned char)94;
unsigned char var_5 = (unsigned char)125;
long long int var_6 = 1463433578954792568LL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 1473873851U;
int var_11 = 564967;
short var_12 = (short)13885;
long long int var_13 = -4123432636011604567LL;
signed char var_14 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
