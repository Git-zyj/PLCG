#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2091604140U;
int var_5 = -593602629;
signed char var_6 = (signed char)88;
int var_8 = -1211705483;
signed char var_10 = (signed char)-63;
unsigned short var_11 = (unsigned short)56258;
unsigned int var_12 = 2698691943U;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)175;
int var_18 = 1926721614;
short var_19 = (short)6890;
int zero = 0;
short var_20 = (short)20531;
long long int var_21 = 8797617132780537476LL;
unsigned int var_22 = 2225602432U;
unsigned short var_23 = (unsigned short)54661;
void init() {
}

void checksum() {
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
