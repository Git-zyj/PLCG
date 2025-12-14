#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3854257411U;
unsigned long long int var_1 = 13643655089800504137ULL;
short var_2 = (short)-31051;
signed char var_3 = (signed char)-38;
long long int var_5 = 1969370569899587207LL;
long long int var_6 = -3102756963259105972LL;
unsigned long long int var_8 = 3245020011625817494ULL;
signed char var_12 = (signed char)-119;
int var_14 = -1907194733;
int zero = 0;
int var_16 = 2037150958;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
