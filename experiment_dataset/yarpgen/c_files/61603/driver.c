#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -171585154;
signed char var_2 = (signed char)121;
short var_6 = (short)747;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)42013;
unsigned long long int var_13 = 14643160223267351875ULL;
long long int var_16 = 6605353663585470931LL;
int var_19 = -1799279345;
int zero = 0;
unsigned char var_20 = (unsigned char)129;
int var_21 = -1190836998;
short var_22 = (short)23606;
int var_23 = -1733010745;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
