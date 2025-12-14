#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7103780235956361630LL;
int var_2 = -2024316153;
unsigned int var_3 = 1721737202U;
unsigned int var_4 = 342938389U;
short var_5 = (short)50;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned short var_14 = (unsigned short)9712;
int zero = 0;
unsigned int var_17 = 3361912800U;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)29767;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
