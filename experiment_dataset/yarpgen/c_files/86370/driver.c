#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)25;
unsigned int var_4 = 3296559337U;
long long int var_5 = 937882215411598222LL;
long long int var_7 = -7642653727788074698LL;
int var_8 = 925888238;
unsigned long long int var_10 = 14857660343760635047ULL;
_Bool var_11 = (_Bool)1;
short var_15 = (short)-16265;
unsigned short var_16 = (unsigned short)24008;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_19 = -1333297689;
long long int var_20 = 8922822687371065699LL;
signed char var_21 = (signed char)-118;
unsigned int var_22 = 4222191676U;
short var_23 = (short)29991;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
