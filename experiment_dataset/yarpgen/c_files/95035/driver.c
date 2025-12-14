#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6985;
short var_2 = (short)7321;
long long int var_5 = 1602976698868498809LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 11055341474085643422ULL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-16708;
short var_11 = (short)11966;
int zero = 0;
short var_14 = (short)-13897;
unsigned short var_15 = (unsigned short)20555;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-14744;
signed char var_18 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
