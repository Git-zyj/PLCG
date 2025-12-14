#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 303852496;
unsigned int var_2 = 2949705420U;
unsigned int var_4 = 3846123830U;
signed char var_6 = (signed char)-23;
_Bool var_8 = (_Bool)0;
int var_10 = 994594949;
signed char var_12 = (signed char)-116;
long long int var_14 = 1190390752832611039LL;
long long int var_16 = 2945207475235760763LL;
unsigned char var_18 = (unsigned char)143;
int zero = 0;
int var_19 = 296927844;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)45810;
short var_22 = (short)-18257;
unsigned int var_23 = 1257991052U;
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
