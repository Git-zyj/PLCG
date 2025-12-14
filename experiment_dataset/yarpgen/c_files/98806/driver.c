#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)69;
long long int var_2 = 700920243635915113LL;
unsigned short var_6 = (unsigned short)6609;
unsigned long long int var_7 = 1174115623447969525ULL;
unsigned int var_11 = 2629912723U;
short var_12 = (short)-23480;
unsigned int var_15 = 2178444276U;
unsigned short var_17 = (unsigned short)42864;
int zero = 0;
int var_18 = 150783659;
unsigned short var_19 = (unsigned short)25500;
unsigned short var_20 = (unsigned short)17097;
unsigned short var_21 = (unsigned short)47148;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
