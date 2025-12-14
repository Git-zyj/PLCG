#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)79;
short var_2 = (short)13049;
signed char var_3 = (signed char)-115;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1450021404U;
unsigned short var_8 = (unsigned short)21241;
int var_10 = -258825199;
short var_11 = (short)-15006;
unsigned long long int var_12 = 242866331546471362ULL;
unsigned long long int var_13 = 6898022385225867677ULL;
int var_15 = 1118567242;
short var_17 = (short)6422;
int zero = 0;
int var_19 = -854016304;
int var_20 = 1726677438;
unsigned long long int var_21 = 8888018078805383295ULL;
int var_22 = 825037295;
unsigned char var_23 = (unsigned char)193;
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
