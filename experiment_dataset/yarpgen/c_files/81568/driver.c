#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -279526119;
_Bool var_3 = (_Bool)1;
int var_4 = -1219740595;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 14080759023635886976ULL;
unsigned short var_9 = (unsigned short)6559;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-28228;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)34515;
unsigned int var_15 = 2898756949U;
_Bool var_16 = (_Bool)0;
int var_17 = -1127246169;
void init() {
}

void checksum() {
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
