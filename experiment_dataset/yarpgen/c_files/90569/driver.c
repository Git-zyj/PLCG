#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1995399005U;
unsigned long long int var_4 = 5870425601766002495ULL;
long long int var_6 = 1150911326971804969LL;
unsigned int var_7 = 1505777776U;
short var_8 = (short)25994;
_Bool var_10 = (_Bool)0;
long long int var_11 = 956064256126494901LL;
unsigned char var_12 = (unsigned char)165;
long long int var_13 = -2415039775645503543LL;
int var_14 = -1290606488;
int zero = 0;
unsigned short var_15 = (unsigned short)1264;
int var_16 = 228841239;
void init() {
}

void checksum() {
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
