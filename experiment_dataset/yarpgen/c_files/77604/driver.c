#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 172120047;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)18879;
long long int var_8 = -1486921698839815878LL;
unsigned int var_10 = 1517942010U;
unsigned int var_15 = 3593360430U;
signed char var_16 = (signed char)-89;
int zero = 0;
int var_18 = -415255595;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
