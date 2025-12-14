#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1659506145U;
unsigned short var_1 = (unsigned short)64560;
unsigned int var_4 = 2939966706U;
short var_5 = (short)13138;
signed char var_6 = (signed char)-98;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)88;
unsigned short var_11 = (unsigned short)56314;
long long int var_12 = 395639656121530159LL;
long long int var_14 = -4154578694294969678LL;
int zero = 0;
unsigned char var_17 = (unsigned char)132;
unsigned int var_18 = 2963532470U;
short var_19 = (short)-29642;
short var_20 = (short)-21390;
int var_21 = 850882995;
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
