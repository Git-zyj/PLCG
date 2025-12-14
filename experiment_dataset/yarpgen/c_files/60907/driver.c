#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -501223285;
int var_1 = -1742264738;
short var_2 = (short)-24218;
signed char var_3 = (signed char)-74;
unsigned int var_4 = 2935860490U;
unsigned int var_5 = 2506684364U;
short var_6 = (short)-874;
int var_7 = 346439747;
short var_8 = (short)-5406;
int var_10 = 1530596799;
int zero = 0;
int var_13 = 487897491;
_Bool var_14 = (_Bool)1;
long long int var_15 = -6160779181554910831LL;
unsigned int var_16 = 1916511295U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
