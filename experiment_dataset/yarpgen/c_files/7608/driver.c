#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
long long int var_1 = 3339813602800636996LL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)56957;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)21450;
int var_9 = -1348553178;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 4080880707U;
int zero = 0;
unsigned int var_13 = 4131023204U;
unsigned short var_14 = (unsigned short)44714;
void init() {
}

void checksum() {
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
