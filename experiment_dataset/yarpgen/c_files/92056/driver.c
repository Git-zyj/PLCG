#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)223;
short var_1 = (short)-11678;
int var_2 = 1547153258;
short var_3 = (short)26026;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)138;
signed char var_11 = (signed char)-20;
int zero = 0;
unsigned char var_13 = (unsigned char)54;
short var_14 = (short)-25996;
unsigned long long int var_15 = 15993089806502602066ULL;
unsigned short var_16 = (unsigned short)49414;
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
