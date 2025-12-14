#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9762;
_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)145;
int var_14 = -226891791;
long long int var_15 = -2992334749415356840LL;
long long int var_16 = 4605242446804713907LL;
unsigned long long int var_17 = 509618567160561265ULL;
int zero = 0;
unsigned int var_19 = 1453917296U;
unsigned short var_20 = (unsigned short)48685;
unsigned long long int var_21 = 17987354205477008678ULL;
void init() {
}

void checksum() {
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
