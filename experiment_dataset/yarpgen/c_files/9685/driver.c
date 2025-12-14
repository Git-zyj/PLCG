#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 127344787U;
int var_3 = -1365481467;
short var_5 = (short)1003;
unsigned long long int var_6 = 10165374583819131459ULL;
unsigned char var_7 = (unsigned char)247;
unsigned int var_10 = 2554281861U;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)79;
long long int var_14 = 4370224500709058746LL;
int zero = 0;
signed char var_17 = (signed char)-85;
short var_18 = (short)-810;
short var_19 = (short)-11115;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-61;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
