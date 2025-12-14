#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30372;
int var_1 = 1035408380;
signed char var_2 = (signed char)34;
signed char var_3 = (signed char)-124;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-15017;
int var_7 = -450656245;
signed char var_8 = (signed char)-80;
signed char var_10 = (signed char)16;
_Bool var_11 = (_Bool)1;
int var_12 = 431325901;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_15 = (short)26196;
short var_16 = (short)15963;
short var_17 = (short)-5634;
int var_18 = -1319819576;
_Bool var_19 = (_Bool)0;
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
