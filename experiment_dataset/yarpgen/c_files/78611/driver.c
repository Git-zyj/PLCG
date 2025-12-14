#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2094874867017064951ULL;
unsigned long long int var_5 = 14139551197140262769ULL;
int var_7 = -471778876;
unsigned long long int var_11 = 2708314995275289975ULL;
short var_12 = (short)31491;
short var_13 = (short)-19001;
int var_14 = 196199953;
int zero = 0;
unsigned short var_16 = (unsigned short)15277;
int var_17 = -1165866458;
int var_18 = 1337128994;
unsigned long long int var_19 = 1568716323902521023ULL;
int var_20 = -493272216;
unsigned short var_21 = (unsigned short)26892;
int var_22 = -413911201;
unsigned long long int var_23 = 7026772718873850173ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
