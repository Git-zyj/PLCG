#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)74;
unsigned long long int var_1 = 1277583985164141337ULL;
unsigned long long int var_4 = 5552666828682404630ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 4196589730U;
short var_8 = (short)-12873;
int var_13 = 72162710;
_Bool var_15 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)216;
long long int var_19 = -7273239833100586129LL;
unsigned char var_20 = (unsigned char)246;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
