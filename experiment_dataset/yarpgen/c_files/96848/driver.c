#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9003;
short var_2 = (short)11633;
int var_4 = 1330063298;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)105;
int var_8 = 1544231617;
int var_10 = 1690239273;
short var_11 = (short)22682;
unsigned short var_14 = (unsigned short)4657;
signed char var_16 = (signed char)-35;
unsigned short var_18 = (unsigned short)55353;
int zero = 0;
unsigned short var_19 = (unsigned short)43894;
int var_20 = 1471796772;
signed char var_21 = (signed char)-124;
int var_22 = -1362343619;
int var_23 = -1989109376;
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
