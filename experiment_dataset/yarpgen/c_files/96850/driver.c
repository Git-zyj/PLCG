#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1087764495;
int var_3 = -354922977;
short var_4 = (short)5981;
int var_6 = -1281133445;
unsigned short var_9 = (unsigned short)34051;
unsigned int var_10 = 3716883539U;
unsigned long long int var_11 = 3438102778076390494ULL;
unsigned int var_15 = 1689673089U;
int zero = 0;
signed char var_17 = (signed char)-70;
int var_18 = 2145451254;
int var_19 = -1251090745;
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
