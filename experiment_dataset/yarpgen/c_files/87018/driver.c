#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15486943667215956639ULL;
unsigned int var_3 = 2187437425U;
int var_6 = -135149071;
int var_7 = -1895334418;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 3162390219U;
int zero = 0;
unsigned long long int var_17 = 1852883844378450552ULL;
unsigned short var_18 = (unsigned short)45387;
_Bool var_19 = (_Bool)0;
int var_20 = -982333070;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
