#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)23076;
long long int var_6 = 1402465322586779013LL;
short var_7 = (short)5678;
_Bool var_8 = (_Bool)0;
long long int var_9 = 9177460730636974033LL;
unsigned long long int var_12 = 15329024214406278737ULL;
_Bool var_15 = (_Bool)0;
short var_17 = (short)-9975;
long long int var_18 = -4563573422919645139LL;
long long int var_19 = 5889215641713106523LL;
int zero = 0;
unsigned int var_20 = 3751581270U;
unsigned long long int var_21 = 18158517111908981197ULL;
signed char var_22 = (signed char)85;
void init() {
}

void checksum() {
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
