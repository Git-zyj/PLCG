#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2054410402;
int var_2 = -46673617;
unsigned short var_3 = (unsigned short)52469;
short var_4 = (short)-14649;
int var_5 = 310952054;
int var_6 = 150157885;
int var_7 = 887007774;
int var_9 = 11365134;
unsigned int var_10 = 3216871708U;
long long int var_11 = -6744217798956689950LL;
unsigned long long int var_12 = 7597661770449969100ULL;
unsigned long long int var_13 = 6073491723347639344ULL;
long long int var_14 = -1663710722388611128LL;
int zero = 0;
short var_15 = (short)17555;
unsigned int var_16 = 3547980101U;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 12335869829075476738ULL;
unsigned short var_19 = (unsigned short)1662;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
