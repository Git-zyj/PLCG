#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2917213051706657227LL;
long long int var_1 = -3725990269573976229LL;
unsigned int var_2 = 3076169576U;
long long int var_6 = 7154195946791805489LL;
unsigned char var_7 = (unsigned char)244;
int var_8 = 298055122;
short var_9 = (short)-32704;
unsigned char var_11 = (unsigned char)230;
unsigned long long int var_12 = 16556890209992178241ULL;
int zero = 0;
int var_13 = -326619085;
unsigned long long int var_14 = 12657267215389638321ULL;
long long int var_15 = -5978809620953381760LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
