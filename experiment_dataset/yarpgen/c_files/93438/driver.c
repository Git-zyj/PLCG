#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -79951682;
short var_1 = (short)-2241;
signed char var_3 = (signed char)-58;
_Bool var_5 = (_Bool)1;
int var_7 = 747919809;
signed char var_8 = (signed char)115;
long long int var_9 = 6065635103091629794LL;
long long int var_11 = -6789647025128999140LL;
signed char var_12 = (signed char)-42;
int zero = 0;
short var_13 = (short)6001;
unsigned long long int var_14 = 13018734158609444439ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2551296102U;
signed char var_17 = (signed char)-83;
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
