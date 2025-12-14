#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)51;
unsigned char var_3 = (unsigned char)144;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)116;
unsigned char var_7 = (unsigned char)90;
int var_8 = 1131068108;
long long int var_11 = -6486772137140829779LL;
int zero = 0;
unsigned char var_14 = (unsigned char)142;
long long int var_15 = 6216625235191956633LL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-3282;
unsigned char var_18 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
