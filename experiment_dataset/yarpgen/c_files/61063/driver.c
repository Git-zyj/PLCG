#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14571;
unsigned char var_1 = (unsigned char)86;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 986592657U;
unsigned int var_5 = 3654598077U;
long long int var_6 = 7637996837408994774LL;
unsigned long long int var_9 = 7027076043554955265ULL;
unsigned short var_11 = (unsigned short)42202;
unsigned char var_13 = (unsigned char)69;
unsigned char var_14 = (unsigned char)5;
int zero = 0;
signed char var_18 = (signed char)19;
int var_19 = -1315680895;
unsigned char var_20 = (unsigned char)165;
short var_21 = (short)-16879;
unsigned char var_22 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
