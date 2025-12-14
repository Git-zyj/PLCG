#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 734156181U;
short var_6 = (short)-25322;
short var_12 = (short)9641;
unsigned short var_13 = (unsigned short)34448;
unsigned long long int var_14 = 11124186370885805430ULL;
short var_15 = (short)-31622;
unsigned long long int var_16 = 7616058935589474015ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 12920787737286138299ULL;
unsigned short var_20 = (unsigned short)20285;
_Bool var_21 = (_Bool)0;
int var_22 = -584039393;
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
