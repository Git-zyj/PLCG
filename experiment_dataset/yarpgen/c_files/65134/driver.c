#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
long long int var_3 = -5491591870628653752LL;
unsigned long long int var_6 = 1138399602457015886ULL;
unsigned long long int var_7 = 10991197774516977738ULL;
_Bool var_8 = (_Bool)0;
int var_9 = -1110642217;
short var_10 = (short)32314;
short var_11 = (short)12097;
short var_13 = (short)-20869;
int zero = 0;
unsigned long long int var_14 = 8327545836830476969ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 3688227176487724184ULL;
unsigned long long int var_17 = 15332381743132729882ULL;
unsigned long long int var_18 = 14680045155088787645ULL;
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
