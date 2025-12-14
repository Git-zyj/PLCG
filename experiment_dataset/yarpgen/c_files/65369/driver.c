#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1347121003;
unsigned char var_2 = (unsigned char)224;
short var_3 = (short)-16462;
signed char var_8 = (signed char)85;
_Bool var_9 = (_Bool)0;
int var_10 = -764025655;
signed char var_14 = (signed char)84;
unsigned long long int var_15 = 11738208324050347950ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2053618846U;
unsigned int var_19 = 2930626430U;
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
