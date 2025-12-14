#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2819188381248832077ULL;
unsigned char var_1 = (unsigned char)71;
long long int var_2 = -4286983835229066898LL;
signed char var_3 = (signed char)1;
short var_5 = (short)25403;
long long int var_6 = 249483093951247913LL;
signed char var_8 = (signed char)-4;
long long int var_9 = 1037732954554828734LL;
unsigned long long int var_11 = 4792710892472662927ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = -841810464;
unsigned long long int var_14 = 1967600735890342356ULL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
