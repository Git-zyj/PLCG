#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7752914715984010865ULL;
unsigned short var_3 = (unsigned short)26455;
unsigned long long int var_6 = 9209245264036643138ULL;
signed char var_7 = (signed char)127;
signed char var_8 = (signed char)39;
signed char var_10 = (signed char)-95;
_Bool var_11 = (_Bool)1;
unsigned short var_14 = (unsigned short)11435;
unsigned int var_15 = 3735625930U;
int zero = 0;
unsigned int var_16 = 4204968793U;
short var_17 = (short)18005;
unsigned short var_18 = (unsigned short)31777;
signed char var_19 = (signed char)-124;
signed char var_20 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
