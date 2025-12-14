#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1507632696;
unsigned char var_2 = (unsigned char)10;
_Bool var_3 = (_Bool)0;
long long int var_4 = 9072850908750381893LL;
unsigned long long int var_5 = 10603010380713438976ULL;
unsigned char var_6 = (unsigned char)122;
long long int var_7 = -4758271269446431935LL;
unsigned short var_10 = (unsigned short)27218;
unsigned long long int var_11 = 1562940614795053786ULL;
unsigned char var_12 = (unsigned char)115;
unsigned char var_13 = (unsigned char)169;
unsigned char var_15 = (unsigned char)47;
int zero = 0;
unsigned int var_16 = 377215291U;
unsigned int var_17 = 2272962484U;
short var_18 = (short)-562;
unsigned char var_19 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
