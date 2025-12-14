#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 7758828809878290709ULL;
unsigned long long int var_4 = 9410176742207746249ULL;
unsigned int var_6 = 2236558843U;
signed char var_7 = (signed char)-39;
int var_8 = -121818399;
unsigned short var_11 = (unsigned short)9441;
int zero = 0;
int var_13 = -1938251683;
short var_14 = (short)-17598;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int var_17 = 677568417;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
